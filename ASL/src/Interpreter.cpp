#include "Interpreter.h"
#include "Atoms/QName.h"
#include <iostream>


Interpreter::Interpreter(Node *r, Attributon* lc) : root_node(r), local_context(lc) {}


void Interpreter::run() {
    root_node->run(local_context, true);
    std::cout << local_context->toString() << std::endl;
    // std::cout << local_context->getAttr(QName::getInstance("value"))->toString() << std::endl;
}