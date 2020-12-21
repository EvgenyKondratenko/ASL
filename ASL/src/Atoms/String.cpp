#include "String.h"
#include <iostream>
#include <sstream>


String::String() {}
String::String(std::string v) : value(v) {}
String::~String() {}

bool String::isString() const {
    return true;
}

void String::print() const {
}

std::string String::toString() const {
    std::ostringstream os;
    os << "StringAtom(\"" << value << "\")";
    return os.str();
}

Thing* gt(std::vector<Thing*> params) {
    return nullptr;
}

Thing* gte(std::vector<Thing*> params) {
    return nullptr;
}

Thing* lt(std::vector<Thing*> params) {
    return nullptr;
}

Thing* lte(std::vector<Thing*> params) {
    return nullptr;
}

Thing* strConcat(std::vector<Thing*> params) {
    return nullptr;
}