#pragma once
#include "../Atom.h"
#include "Integer.h"
#include "../Functions/Functions.h"

class Integer;

class Double : public Atom {
public:
    Double();
    Double(const Double& rhs);
    Double(double v);
    ~Double();

    void print() const final;
    std::string toString() const final;

    friend Double operator+ (const Integer& lhs, const Double& rhs);
    friend Double operator+ (const Double& lhs, const Integer& rhs);
    friend Double operator+ (const Double& lhs, const Double& rhs);

    bool isDouble() const final;

    Thing* toInteger() const;
private:
    double value;
    friend class Functions;
};