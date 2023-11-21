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
	if (!s)
		return;
    this->spells.learnSpell(s);
}

void    Warlock::forgetSpell(std::string spell)
{
    this->spells.forgetSpell(spell);
}

void    Warlock::launchSpell(std::string spell, ATarget &t)
{
    ASpell *s = spells.createSpell(spell);
    if (s)
        s->launch(t);
}
