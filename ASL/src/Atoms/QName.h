#pragma once
#include "../Atom.h"
#include <string>
#include <map>


class QName : public Atom {
private:
    QName(std::string name);
public:
    static QName* getInstance(std::string name);
    ~QName();

    void print() const final;
    std::string toString() const final;

    bool isQName() const final;
private:
    std::string value;
    static std::map<std::string, QName*> constants;
};