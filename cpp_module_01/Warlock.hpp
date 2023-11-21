#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include "ASpell.hpp"
#include <vector>

class Warlock
{
    private:
    std::string name;
    std::string title;
    std::vector<ASpell *> spells;

    Warlock (void);
    Warlock (const Warlock &x);
    Warlock &operator=(const Warlock &x);

    public:
    const std::string &getName(void) const;
    const std::string &getTitle(void) const;

    void    setTitle(const std::string &t);

    Warlock (const std::string &name, const std::string &title);
    ~Warlock(void);

    void    learnSpell(ASpell *s);
    void    forgetSpell(std::string spell);
    void    launchSpell(std::string spell, ATarget &t);

    void introduce(void) const;

};

#endif