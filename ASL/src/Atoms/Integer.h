#pragma once
#include "../Atom.h"


class Integer : public Atom {
public:
    Integer();
    ~Integer();

    bool isInteger() const final;
    Thing* mod(Thing* rhs) const;
    Thing* toDouble() const;
private:
    int value;
};