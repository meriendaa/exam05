
#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
    std::string name;
    std::string effects;
    
    public:

    std::string getName(void) const;
    std::string getEffects(void) const;

    ASpell(void){}
    ASpell(const ASpell &a);
    ASpell &operator=(const ASpell &a);
    
    ASpell(std::string name, std::string effect);
    
    virtual ASpell *clone() const = 0;

    void    launch(const ATarget &a);

    virtual ~ASpell(){}
};

#endif