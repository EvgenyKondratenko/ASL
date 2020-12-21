#include <iostream>
#include "Boolean.h"


Boolean::Boolean(bool val) : value(val) {}


bool Boolean::isBoolean() const {
    return true;
}

void Boolean::print() const {
}

std::string Boolean::toString() const {
    if (value) {
        return "BooleanAtom(true)";
    } else {
        return "BooleanAtom(false)";
    }
}


Thing* Boolean::Not() const {
    return nullptr;
}

Thing* And(std::vector<Thing*> params) {
    return nullptr;
}

Thing* Or(std::vector<Thing*> params) {
    return nullptr;
}