#include <iostream>
#include "Atom.h"
#include "Undef.h"
#include "Attributon.h"
#include "Atoms/String.h"
#include "Atoms/QName.h"
#include "Atoms/Boolean.h"
#include "Atoms/Integer.h"
#include "Atoms/Double.h"
#include "Node.h"


int main() {
    std::cout << "Start init" << std::endl;
    String S;
    std::cout << S.isAttributon() << std::endl;
    QName* Q = QName::getInstance(std::string("fuck you"));
    QName* qptr = Q;
    std::cout << Q->isAtom() << std::endl;
    Boolean B(true);
    Boolean B2(false);
    B.print(), B2.print();
    Double D(0);
    Integer* I = Integer::getInstance(55);
    Thing* atom1 = Integer::getInstance(10);
    std::cout << atom1->toString() << D.toString() << "!!!\n";
    std::cout << atom1->isInteger() << std::endl;

    std::cout << D.isQName() << D.isDouble() << std::endl;

    Double* dAtom = new Double(10.0);
    Integer* iAtom = Integer::getInstance(5);
    Thing* x = new Double(*iAtom + *dAtom);

    std::cout << "hash is " <<  std::hash<Thing*>{}(x) << std::endl;

    x->isDouble();

    Node* a = new Node(std::string("Atom"), iAtom);

    Attributon* AAA = new Attributon();
    QName* val = QName::getInstance("biba");
    AAA->setAttr(val, iAtom);
    AAA->setAttr(qptr, &B2);
    std::cout << "AAA:\n" << AAA->toString() << std::endl;
    Attributon* BBB = new Attributon();
    QName* inside = QName::getInstance("value");
    BBB->setAttr(inside, AAA);
    Undef* uu = Undef::getInstance();
    BBB->setAttr(qptr, uu);
    std::cout << "BBB:\n" << BBB->toString() << std::endl;

    uu->print();

    std::cout << (dAtom == dAtom) << std::endl;

    Undef* u1 = Undef::getInstance();
    Undef* u2 = Undef::getInstance();

    Integer* i1 = Integer::getInstance(10);
    Integer* i2 = Integer::getInstance(9);
    std::cout << "Compare Integer objects i1 == i2 is : " << (i1 == i2) << std::endl;

    std::cout << "Compare Undef objects u1 == u2 is : " << (u1 == u2) << std::endl;

    QName* q1 = QName::getInstance("value");
    QName* q2 = QName::getInstance("value");

    std::cout << "Compare QName objects q1 == q2 is : " << (q1 == q2) << std::endl;


    Attributon* lc1 = new Attributon();
    Attributon* variables = new Attributon();
    Attributon* value = new Attributon();
    QName* VALUE= QName::getInstance("value");
    QName* VARIABLES = QName::getInstance("variables");
    lc1->setAttr(VALUE, value);
    lc1->setAttr(VARIABLES, variables);

    std::cout << lc1->toString() << std::endl;

    return 0;
}
