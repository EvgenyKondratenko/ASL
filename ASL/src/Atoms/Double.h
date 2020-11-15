#pragma once
#include "../Atom.h"


class Double : public Atom {
public:
    Double();
    ~Double();

    bool isDouble() const final;

    Thing* toInteger() const;
private:
    double value;
};