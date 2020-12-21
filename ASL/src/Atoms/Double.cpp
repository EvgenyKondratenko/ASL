#include "Double.h"
#include <iostream>
#include <sstream>


Double::Double() {}
Double::Double(double v) : value(v) {}
Double::Double(const Double& rhs) : value(rhs.value) {}
Double::~Double() {}

bool Double::isDouble() const {
    return true;
}

void Double::print() const {
}

std::string Double::toString() const {
    std::ostringstream os;
    os << "DoubleAtom(" << value << ")";
    return os.str();
}

Thing* Double::toInteger() const {
    return nullptr;
}

Double operator+ (const Integer& lhs, const Double& rhs) {
    return Double(lhs.value + rhs.value);
}

Double operator+ (const Double& lhs, const Integer& rhs) {
    return Double(lhs.value + rhs.value);
}

Double operator+ (const Double& lhs, const Double& rhs) {
    return Double(lhs.value + rhs.value);
}