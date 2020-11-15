#include <iostream>
#include "Atom.h"
#include "Attributon.h"
#include "Atoms/String.h"
#include "Atoms/QName.h"
#include "Atoms/Boolean.h"
#include "Atoms/Integer.h"
#include "Atoms/Double.h"
#include "Attributons/State.h"
#include "Attributons/Multistate.h"
#include "Attributons/Function.h"


int main() {
    std::cout << "Start init" << std::endl;
    Atom A;
    Attributon T;
    String S;
    std::cout << S.isAttributon() << std::endl;
    QName Q;
    std::cout << Q.isAtom() << std::endl;
    Boolean B;
    Double D;
    Integer I;
    State St;
    Multistate Mst;
    Function func;
    std::cout << D.isQName() << D.isDouble() << std::endl;
    return 0;
}
