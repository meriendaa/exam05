#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    this->name = "Fwoosh";
    this->effects = "fwooshed";
}

Fwoosh::Fwoosh(const Fwoosh &f)
{
    *this = f;
}

Fwoosh *Fwoosh::clone() const
{
    return new Fwoosh;
}

Fwoosh &Fwoosh::operator=(const Fwoosh &f)
{
    this->effects = f.effects;
    this->name = f.name;
    return *this;
}


