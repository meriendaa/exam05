
#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
    std::string type;
    
    public:

    const std::string &getType(void) const;

    ATarget(void){}
    ATarget(const ATarget &a);
    ATarget &operator=(const ATarget &a);
    
    ATarget(std::string type);
    
    virtual ATarget *clone() const = 0;
    
    void    getHitBySpell(const ASpell &spell) const;

    virtual ~ATarget(){}
};

#endif