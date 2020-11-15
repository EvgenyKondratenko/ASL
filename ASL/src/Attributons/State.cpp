#include "State.h"


State::State() {}
State::~State() {}


State* State::copyState() const {
    return nullptr;
}
State* State::getState() const {
    return nullptr;
}
void State::globaref(std::vector<Thing*> params) {}

void State::globaset(std::vector<Thing*> params) {}

State* State::stop() const {
    return nullptr;
}