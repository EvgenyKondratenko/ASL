#pragma once
#include "../Attributon.h"
#include "State.h"


class Multistate : public Attributon {
public:
    Multistate();
    ~Multistate();

    Multistate* variChain(std::vector<State*> params);
    Multistate* variants(std::vector<Multistate*> params);
    Thing* variantsForKeyValues(Thing* y, Thing* z);
private:
    Thing* states = nullptr;
};