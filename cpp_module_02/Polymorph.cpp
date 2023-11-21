#include "Polymorph.hpp"

Polymorph::Polymorph()
{
    this->name = "Polymorph";
    this->effects = "turned into a critter";
}

Polymorph::Polymorph(const Polymorph &f)
{
    *this = f;
}

Polymorph *Polymorph::clone() const
{
    return new Polymorph;
}

Polymorph &Polymorph::operator=(const Polymorph &f)
{
    this->effects = f.effects;
    this->name = f.name;
    return *this;
}
