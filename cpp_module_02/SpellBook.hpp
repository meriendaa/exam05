#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include "ASpell.hpp"
#include <iostream>
#include <vector>

class SpellBook
{
    private:
    std::vector<ASpell*> spells;

    SpellBook(const SpellBook &s);
    SpellBook &operator=(const SpellBook &s);
    
    public:
    SpellBook(){}
    ~SpellBook(){}
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string const &spell);
    ASpell* createSpell(std::string const &spell);

};

#endif