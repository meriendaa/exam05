#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell)
{
	if (!spell)
		return ;
	for (size_t i = 0; i < this->spells.size(); i++)
    {
        if (this->spells[i]->getName() == spell->getName())
            return ;
    }
    this->spells.push_back(spell);
}

void SpellBook::forgetSpell(std::string const &spell)
{
    for (size_t i = 0; i < this->spells.size(); i++)
    {
        if (this->spells[i]->getName() == spell)
        {
            this->spells.erase(spells.begin() + i);
            break ;
        }
    }
}

ASpell *SpellBook::createSpell(std::string const &spell)
{
    for (size_t i = 0; i < this->spells.size(); i++)
    {
        if (this->spells[i]->getName() == spell)
            return (this->spells[i]);
    }
    return (NULL);
}