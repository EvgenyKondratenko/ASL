#pragma once

#include <string>
#include <vector>
#include "Attributon.h"
#include "Atom.h"


class Node {
public:
    Node();
    Node(std::string type);
    Node(std::string type, Thing* value);
    Node(std::string type, Thing* name, Node* expr_list);
    Node(std::string type, std::string name, Node* arg1, Node* arg2);

    void run(Attributon* lc, bool is_root);

    void add_var(Node* n);
    void add_expr(Node* n);
    void add_assign(Node* lhs, Node* rhs);

private:
    Thing* value = nullptr;
    Node* arg1 = nullptr;
    Node* arg2 = nullptr;
    std::vector<Node*> expr_list;
    std::vector<Node*> vars_list;
    std::string node_type = "";
    std::string function_name = "";

    friend class Interpreter;
};