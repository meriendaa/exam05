#include "Warlock.hpp"

const std::string &Warlock::getName(void) const
{
    return name;
}
const std::string &Warlock::getTitle(void) const
{
    return title;
}

void    Warlock::setTitle(const std::string &t)
{
    this->title = t;
}

Warlock::Warlock (const std::string &name, const std::string &title)
{
    this->title = title;
    this->name = name;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock (void)
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::introduce(void) const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell *s)
{
    this->spells.push_back(s);
}

void    Warlock::forgetSpell(std::string spell)
{
    for (size_t i = 0; i < spells.size(); i++)
    {
        if (spell == spells[i]->getName())
        {
            spells.erase(spells.begin() + i);
            break;
        }
    }
}

void    Warlock::launchSpell(std::string spell, ATarget &t)
{
	std::cout << "boo" << std::endl;
    for (size_t i = 0; i < spells.size(); i++)
    {
        if (spell == spells[i]->getName())
        {
            spells[i]->launch(t);
            break;
        }
    }
}
