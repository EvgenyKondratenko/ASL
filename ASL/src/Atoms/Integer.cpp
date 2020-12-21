#include "Integer.h"
#include <iostream>
#include <sstream>


std::map<int, Integer*> Integer::constants;

Integer::Integer() {}

Integer::Integer(int v) : value(v) {}

Integer* Integer::getInstance(int v) {
    if (constants.find(v) == constants.end()) {
        Integer* tmp = new Integer(v);
        constants[v] = tmp;
    }
    return constants[v];
}

Integer::~Integer() {}

bool Integer::isInteger() const {
    return true;
}

void Integer::print() const {
}


std::string Integer::toString() const {
    std::ostringstream os;
    os << "IntegerAtom(" << value << ")";
    return os.str();
}


Thing* Integer::mod(Thing* rhs) const {
    return nullptr;
}

Thing* Integer::toDouble() const {
    return nullptr;
}

Integer operator+(const Integer &lhs, const Integer &rhs) {
    return Integer(lhs.value + rhs.value);
}