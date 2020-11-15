#pragma once
#include <vector>

class Thing {
public:
    virtual ~Thing() = 0;

    virtual bool isAtom() const = 0;
    virtual bool isAttributon() const = 0;
    virtual bool isBoolean() const = 0;
    virtual bool isInteger() const = 0;
    virtual bool isDouble() const = 0;
    virtual bool isString() const = 0;
    virtual bool isQName() const = 0;

    virtual Thing* copyDeep() const = 0;
    virtual Thing* copyShallow() const = 0;

    virtual bool eq(Thing* rhs) const = 0;
    virtual bool neq(Thing* rhs) const = 0;
    virtual bool eqDeep(Thing* rhs) const = 0;
    virtual bool eqShallow(std::vector<Thing*> params) const = 0;

    virtual Thing* read(std::vector<Thing*> params) const = 0;

    virtual bool toBoolean() const = 0;
    virtual Thing* toString() const = 0;

    // toDo
    // delete attr
    // add attr
    // set attr
    // get attr
    // toDO Global attributon
    // Sequence
    virtual Thing* copySeq() const = 0;
    virtual Thing* eqSeq(std::vector<Thing*> params) const = 0;
    virtual void seqCons(Thing* rhs) const = 0;
    virtual Thing* seqCopy() const = 0;
    virtual Thing* seqCreate(std::vector<Thing*> params) const = 0;
    virtual Thing* seqFirst() const = 0;
    virtual int seqLength() const = 0;
    virtual Thing* seqPrepend(std::vector<Thing*> params) const = 0;
    virtual Thing* seqRest() const = 0;
    virtual Thing* seqReverse() const = 0;

    // Jump
    virtual Thing* coalesce(std::vector<Thing*> params) const = 0;
    virtual bool isDef() const = 0;
    virtual bool isUndef() const = 0;
    virtual Thing* undef() const = 0;

    // Console
    virtual void print() const = 0;
    virtual void println() const = 0;

    /*
    // Variable
    virtual void setq() const = 0;
     */
};