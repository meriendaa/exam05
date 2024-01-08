#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
    ASpell();  
    virtual ~ASpell();  
    ASpell(const ASpell &obj);
    ASpell&operator=(const ASpell &obj);
    std::string const &getName()const;
    std::string const &getEffects()const;
    ASpell(std::string const &name, std::string const &effects);
    virtual ASpell *clone()const = 0;
    void launch(ATarget const &tr) const;
};