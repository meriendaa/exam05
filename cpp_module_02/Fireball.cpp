#include "Fireball.hpp"

Fireball::Fireball()
{
    this->name = "Fireball";
    this->effects = "burnt to a crisp";
}

Fireball::Fireball(const Fireball &f)
{
    *this = f;
}

Fireball *Fireball::clone() const
{
    return new Fireball;
}

Fireball &Fireball::operator=(const Fireball &f)
{
    this->effects = f.effects;
    this->name = f.name;
    return *this;
}
