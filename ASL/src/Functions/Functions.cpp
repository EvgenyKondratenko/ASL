#include "Functions.h"
#include "../Atoms/QName.h"
#include "../Atoms/Integer.h"
#include "../Atoms/Double.h"
#include <iostream>


void Functions::add(Node *lhs, Node *rhs, Attributon *lc) {
    lhs->run(lc, false);
    Thing* first_argument_value = lc->getAttr(QName::getInstance("value"));
    // std::cout << first_argument_value->toString() << std::endl;
    rhs->run(lc, false);
    Thing* second_argument_value = lc->getAttr(QName::getInstance("value"));
    // std::cout << second_argument_value->toString() << std::endl;
    if (first_argument_value->isAtom() && second_argument_value->isAtom()) {
        Integer* a1 = dynamic_cast<Integer*>(first_argument_value);
        Integer* a2 = dynamic_cast<Integer*>(second_argument_value);
        lc->setAttr(QName::getInstance("value"), Integer::getInstance(a1->value + a2->value));
    }
}
