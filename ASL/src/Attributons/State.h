#pragma once
#include "../Attributon.h"


class State : public Attributon {
public:
    State();
    ~State();

    State* copyState() const;
    State* getState() const;
    void globaref(std::vector<Thing*> params);
    void globaset(std::vector<Thing*> params);
    State* stop() const;
    // toDO sysFunctions
private:
    // toDo isState(), delete attrs
    Attributon* variableValue = nullptr;
    Thing* value = nullptr;
    Thing* jump = nullptr;
    Thing* previousJump = nullptr;
    Attributon* global = nullptr;
    Attributon* context = nullptr;
};