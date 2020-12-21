#include "Thing.h"
#include "Attributon.h"
#include "Atom.h"
#include "Node.h"
#include "Undef.h"


class Interpreter {
public:
    Interpreter(Node* n, Attributon* local_context);
    void run();
private:
    Attributon* local_context;
    Node* root_node = nullptr;
};
