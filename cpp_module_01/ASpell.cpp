#include "ASpell.hpp"


std::string ASpell::getName(void) const
{
    return (name);
}

std::string ASpell::getEffects(void) const
{
    return (effects);
}

ASpell::ASpell(const ASpell &a)
{
    *this = a;
}

ASpell &ASpell::operator=(const ASpell &a)
{
    this->name = a.name;
    this->effects = a.effects;
    return *this;
}

ASpell::ASpell(std::string name, std::string effect)
{
    this->name = name;
    this->effects = effect; 
}

void    ASpell::launch(const ATarget &a) const
{
    a.getHitBySpell(*this);
}
