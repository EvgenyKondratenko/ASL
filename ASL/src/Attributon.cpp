#include "Attributon.h"
#include "Undef.h"
#include <iostream>
#include <sstream>
#include <map>


Attributon::Attributon() {}
Attributon::~Attributon() noexcept {}


Thing* Attributon::getAttr(Thing* key) {
    //toDo ask what should it return for non-existing key
    auto it = attributes.find(key);
    if (it != attributes.end()) {
        return attributes[key];
    }
    Thing* un = Undef::getInstance();
    return un;
}


void Attributon::setAttr(Thing* key, Thing* attr_value) {
    attributes[key] = attr_value;
}


bool Attributon::isAtom() const {
    return false;
}

bool Attributon::isAttributon() const {
    return true;
}

bool Attributon::isBoolean() const {
    return false;
}

bool Attributon::isInteger() const {
    return false;
}

bool Attributon::isDouble() const {
    return false;
}

bool Attributon::isString() const {
    return false;
}

bool Attributon::isQName() const {
    return false;
}

Attributon* Attributon::copyDeep() const {
    return nullptr;
}
Attributon* Attributon::copyShallow() const {
    return nullptr;
}

bool Attributon::eq(Thing *rhs) const {
    return false;
}

bool Attributon::neq(Thing *rhs) const {
    return !this->eq(rhs);
}

bool Attributon::eqDeep(Thing *rhs) const {
    return false;
}

bool Attributon::eqShallow(std::vector<Thing*> params) const {
    return false;
}

Thing* Attributon::read(std::vector<Thing*> params) const {
    return nullptr;
}

bool Attributon::toBoolean() const {
    return false;
}

std::string Attributon::toString() const {
    int indent = 4;
    std::ostringstream os;
    os << this->toStringWithIndent(indent);
    return os.str();
}

std::string Attributon::toStringWithIndent(int indent) const {
    int l = attributes.size();
    if (l == 0) {
        std::cout << "";
        return "{}";
    }

    std::ostringstream os;
    os << "{\n";
    for (auto it = attributes.begin(); it != attributes.end(); ++it) {
        os << std::string(indent, ' ');
        os << it->first->toStringWithIndent(indent + 4);
        os << " = ";
        os << it->second->toStringWithIndent(indent + 4);
        if (attributes.end() != std::next(it)) {
            os << ", \n";
        }
    }
    os << "\n";
    os << std::string(indent - 4, ' ');
    os << "}";
    return os.str();
}

Attributon* Attributon::aref(std::vector<Thing *> params) const {
    return nullptr;
}

Attributon* Attributon::aset(std::vector<Thing *> params) const {
    return nullptr;
}

Attributon* Attributon::conz(std::vector<Thing *> params) const {
    return nullptr;
}

// Sequence
Thing* Attributon::copySeq() const {
    return nullptr;
}

Thing* Attributon::eqSeq(std::vector<Thing*> params) const {
    return nullptr;
}

void Attributon::seqCons(Thing* rhs) const {
    // toDo
}

Thing* Attributon::seqCopy() const  {
    return nullptr;
}

Thing* Attributon::seqCreate(std::vector<Thing*> params) const {
    return nullptr;
}

Thing* Attributon::seqFirst() const {
    return nullptr;
}

int Attributon::seqLength() const {
    return 0;
}

Thing* Attributon::seqPrepend(std::vector<Thing*> params) const {
    return nullptr;
}

Thing* Attributon::seqRest() const {
    return nullptr;
}

Thing* Attributon::seqReverse() const {
    return nullptr;
}

// Jump
Thing* Attributon::coalesce(std::vector<Thing*> params) const {
    return nullptr;
}

bool Attributon::isDef() const {
    return false;
}

bool Attributon::isUndef() const {
    return false;
}

Thing* Attributon::undef() const {
    return nullptr;
}

// Console
void Attributon::print() const {
    this->print_with_indent(0);
}


void Attributon::print_with_indent(int indent) const {
}


void Attributon::println() const {}