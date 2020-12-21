#pragma once
#include "../Atom.h"
#include "Double.h"
#include <map>
#include "../Functions/Functions.h"


class Double;

class Integer : public Atom {
private:
    Integer();
    Integer(int v);
public:

    static Integer* getInstance(int v);
    ~Integer();

    void print() const final;
    std::string toString() const final;

    friend Integer operator+ (const Integer& lhs, const Integer& rhs);
    friend Double operator+ (const Integer& lhs, const Double& rhs);
    friend Double operator+ (const Double& lhs, const Integer& rhs);

    bool isInteger() const final;
    Thing* mod(Thing* rhs) const;
    Thing* toDouble() const;

private:
    int value;
    static std::map<int, Integer*> constants;
    friend class Functions;
};