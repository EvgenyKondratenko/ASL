#pragma once
#include "../Attributon.h"


class Function : public Attributon {
public:
    Function();
    ~Function();
private:
    Thing* parameters = nullptr;
    Thing* body = nullptr;
};
