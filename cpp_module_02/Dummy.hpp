#ifndef DUMMY_HPP
#define DUMMY_HPP
#include <iostream>
#include "ATarget.hpp"

class Dummy :public ATarget
{
    public:
    Dummy();
    Dummy(const Dummy &d);
    Dummy &operator=(const Dummy &d);
    ~Dummy(){}
    virtual Dummy *clone() const;
};

#endif