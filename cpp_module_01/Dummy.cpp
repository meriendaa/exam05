#include "Dummy.hpp"

Dummy::Dummy()
{
    this->type = "Target Practice Dummy";
}

Dummy::Dummy(const Dummy &d)
{
    *this = d;
}

Dummy &Dummy::operator=(const Dummy &d)
{
    this->type = d.type;
    return *this;
}

Dummy *Dummy::clone() const
{
    return new Dummy;
}