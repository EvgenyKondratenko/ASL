#include "Attributon.h"


Attributon::Attributon() {}
Attributon::~Attributon() noexcept {}

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

Thing* Attributon::toString() const {
    return nullptr;
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
void Attributon::print() const {}
void Attributon::println() const {}