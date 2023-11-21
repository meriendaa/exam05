#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#include <iostream>
#include "ASpell.hpp"

class Fireball :public ASpell
{
    public:
    Fireball();
    Fireball(const Fireball &f);
    Fireball &operator=(const Fireball &f);
    ~Fireball(){}
    virtual Fireball *clone() const;
};

#endif