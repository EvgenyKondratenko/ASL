#include "Undef.h"
#include <iostream>


Undef::Undef() {}

Undef* Undef::instance = 0;

Undef* Undef::getInstance() {
    if (instance == 0) {
        instance = new Undef();
    }
    return instance;
}


bool Undef::isAtom() const {
    return false;
}

bool Undef::isAttributon() const {
    return false;
}

bool Undef::isBoolean() const {
    return false;
}

bool Undef::isInteger() const {
    return false;
}

bool Undef::isDouble() const {
    return false;
}

bool Undef::isString() const {
    return false;
}

bool Undef::isQName() const {
    return false;
}

Undef* Undef::copyDeep() const {
    return nullptr;
}
Undef* Undef::copyShallow() const {
    return nullptr;
}

bool Undef::eq(Thing *rhs) const {
    return false;
}

bool Undef::neq(Thing *rhs) const {
    return !this->eq(rhs);
}

bool Undef::eqDeep(Thing *rhs) const {
    return false;
}

bool Undef::eqShallow(std::vector<Thing*> params) const {
    return false;
}

Thing* Undef::read(std::vector<Thing*> params) const {
    return nullptr;
}

bool Undef::toBoolean() const {
    return false;
}

std::string Undef::toString() const {
    return "Undef()";
}

std::string Undef::toStringWithIndent(int indent = 0) const {
    return this->toString();
}

Undef* Undef::aref(std::vector<Thing *> params) const {
    return nullptr;
}

Undef* Undef::aset(std::vector<Thing *> params) const {
    return nullptr;
}

Undef* Undef::conz(std::vector<Thing *> params) const {
    return nullptr;
}

// Sequence
Thing* Undef::copySeq() const {
    return nullptr;
}

Thing* Undef::eqSeq(std::vector<Thing*> params) const {
    return nullptr;
}

void Undef::seqCons(Thing* rhs) const {
    // toDo
}

Thing* Undef::seqCopy() const  {
    return nullptr;
}

Thing* Undef::seqCreate(std::vector<Thing*> params) const {
    return nullptr;
}

Thing* Undef::seqFirst() const {
    return nullptr;
}

int Undef::seqLength() const {
    return 0;
}

Thing* Undef::seqPrepend(std::vector<Thing*> params) const {
    return nullptr;
}

Thing* Undef::seqRest() const {
    return nullptr;
}

Thing* Undef::seqReverse() const {
    return nullptr;
}

// Jump
Thing* Undef::coalesce(std::vector<Thing*> params) const {
    return nullptr;
}

bool Undef::isDef() const {
    return false;
}

bool Undef::isUndef() const {
    return true;
}

Thing* Undef::undef() const {
    return nullptr;
}

// Console
void Undef::print() const {
    std::cout << "Undef()";
}

void Undef::println() const {}