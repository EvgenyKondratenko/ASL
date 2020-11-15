#pragma once
#include "../Atom.h"


class Boolean : public Atom {
public:
    bool isBoolean() const final;

    Thing* Not() const;
    friend Thing* And(std::vector<Thing*> params);
    friend Thing* Or(std::vector<Thing*> params);
private:
    bool value;
};
