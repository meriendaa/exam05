#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#include <iostream>
#include "ASpell.hpp"

class Polymorph :public ASpell
{
    public:
    Polymorph();
    Polymorph(const Polymorph &f);
    Polymorph &operator=(const Polymorph &f);
    ~Polymorph(){}
    virtual Polymorph *clone() const;
};

#endif