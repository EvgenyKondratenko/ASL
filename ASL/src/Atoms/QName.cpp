#include "QName.h"
#include <iostream>
#include <sstream>


QName::QName(std::string name) : value(name) {}
QName::~QName() {}


std::map<std::string, QName*> QName::constants;


QName* QName::getInstance(std::string v) {
    if (constants.find(v) == constants.end()) {
        QName* tmp = new QName(v);
        constants[v] = tmp;
    }
    return constants[v];
}


void QName::print() const {
}


std::string QName::toString() const {
    std::ostringstream os;
    os << "QNameAtom(\"" << value << "\")";
    return os.str();
}


bool QName::isQName() const {
    return true;
}