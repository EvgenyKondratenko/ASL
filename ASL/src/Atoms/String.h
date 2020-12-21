#pragma once
#include "../Atom.h"
#include <string>


class String : public Atom {
public:
    String();
    String(std::string v);
    ~String();

    bool isString() const final;
    void print() const final;
    std::string toString() const final;

    friend Thing* gt(std::vector<Thing*> params);
    friend Thing* gte(std::vector<Thing*> params);
    friend Thing* lt(std::vector<Thing*> params);
    friend Thing* lte(std::vector<Thing*> params);

    friend Thing* strConcat(std::vector<Thing*> params);
private:
    std::string value; // toDo utf-8
};