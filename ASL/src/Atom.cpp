#include "Atom.h"


Atom::Atom() {}
Atom::~Atom() noexcept {}

bool Atom::isAtom() const {
    return true;
}

bool Atom::isAttributon() const {
    return false;
}

bool Atom::isBoolean() const {
    return false;
}

bool Atom::isInteger() const {
    return false;
}

bool Atom::isDouble() const {
    return false;
}

bool Atom::isString() const {
    return false;
}

bool Atom::isQName() const {
    return false;
}

Atom* Atom::copyDeep() const {
    return nullptr;
}
Atom* Atom::copyShallow() const {
    return nullptr;
}

bool Atom::eq(Thing *rhs) const {
    return false;
}

bool Atom::neq(Thing *rhs) const {
    return !this->eq(rhs);
}

bool Atom::eqDeep(Thing *rhs) const {
    return false;
}

bool Atom::eqShallow(std::vector<Thing*> params) const {
    return false;
}

Thing* Atom::read(std::vector<Thing*> params) const {
    return nullptr;
}

bool Atom::toBoolean() const {
    return false;
}

Thing* Atom::toString() const {
    return nullptr;
}

// Sequence
Thing* Atom::copySeq() const {
    return nullptr;
}

Thing* Atom::eqSeq(std::vector<Thing*> params) const {
    return nullptr;
}

void Atom::seqCons(Thing* rhs) const {
    // toDo
}

Thing* Atom::seqCopy() const  {
    return nullptr;
}

Thing* Atom::seqCreate(std::vector<Thing*> params) const {
    return nullptr;
}

Thing* Atom::seqFirst() const {
    return nullptr;
}

int Atom::seqLength() const {
    return 0;
}

Thing* Atom::seqPrepend(std::vector<Thing*> params) const {
    return nullptr;
}

Thing* Atom::seqRest() const {
    return nullptr;
}

Thing* Atom::seqReverse() const {
    return nullptr;
}

// Jump
Thing* Atom::coalesce(std::vector<Thing*> params) const {
    return nullptr;
}

bool Atom::isDef() const {
    return false;
}

bool Atom::isUndef() const {
    return false;
}

Thing* Atom::undef() const {
    return nullptr;
}

// Console
void Atom::print() const {}
void Atom::println() const {}

