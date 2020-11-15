#pragma once
#include "../Atom.h"
#include <string>


class QName : public Atom {
public:
    QName();
    ~QName();

    bool isQName() const final;
private:
    std::string value;
};