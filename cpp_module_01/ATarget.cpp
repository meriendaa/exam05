#include "ATarget.hpp"


const std::string &ATarget::getType(void) const
{
    return type;
}

ATarget::ATarget(const ATarget &a)
{
    *this = a;
}

ATarget &ATarget::operator=(const ATarget &a)
{
    this->type = a.type;
    return *this;
}

ATarget::ATarget(std::string type)
{
    this->type = type;
}

void    ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
