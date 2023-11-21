#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include <iostream>
#include "ASpell.hpp"

class Fwoosh :public ASpell
{
    public:
    Fwoosh();
    Fwoosh(const Fwoosh &f);
    Fwoosh &operator=(const Fwoosh &f);
    ~Fwoosh(){}
    virtual Fwoosh *clone() const;
};

#endif