#include "Node.h"
#include "Atoms/QName.h"
#include "Functions/Functions.h"
#include <iostream>


Node::Node() {}

// constructor for lists
Node::Node(std::string type) {
    node_type = type;
}

// constructor for atoms
Node::Node(std::string type, Thing* value) {
    node_type = type;
    this->value = value;
}

// constructor for ASL or custom function call by name
Node::Node(std::string type, Thing* qname, Node* expr_list) {
    node_type = type;
    value = qname;
    this->arg1 = expr_list;
}

// counstructor for base arifmetic functions
Node::Node(std::string type, std::string name, Node* arg1, Node* arg2) {
    node_type = type;
    function_name = name;
    this->arg1 = arg1;
    this->arg2 = arg2;
}


void Node::add_var(Node* n) {
    vars_list.push_back(n);
}

void Node::add_expr(Node* n) {
    expr_list.push_back(n);
}


void Node::add_assign(Node* lhs, Node* rhs) {
    arg1->add_expr(lhs);
    arg2->add_expr(rhs);
}


void Node::run(Attributon* local_context, bool is_root = false) {
    // std::cout << "Node type = : " << current_node->node_type << std::endl;
    if (this->node_type == "Atom") {
        local_context->setAttr(QName::getInstance("value"), this->value);
    } else if (this->node_type == "VariableAssignment") {
        this->arg2->run(local_context, false);
        Thing* vars = local_context->getAttr(QName::getInstance("variables"));
        if (vars->isAttributon()) {
            Attributon* var = dynamic_cast<Attributon*>(vars);
            var->setAttr(this->arg1->value, local_context->getAttr(QName::getInstance("value")));
        }
        // std::cout << local_context->toString() << std::endl;
    } else if (this->node_type == "Variable") {
        Thing* vars = local_context->getAttr(QName::getInstance("variables"));
        Attributon* var = dynamic_cast<Attributon*>(vars);
        local_context->setAttr(QName::getInstance("value"), var->getAttr(this->value));
    } else if (this->node_type == "FunctionCall") {
        if (this->function_name == "add") {
            Functions::add(this->arg1, this->arg2, local_context);
        }
    }
    // std::cout << local_context->toString() << std::endl;
}