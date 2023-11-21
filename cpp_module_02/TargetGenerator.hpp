#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include <iostream>
#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
    private:
    std::vector <ATarget *>targets;
    TargetGenerator(const TargetGenerator &t);
    TargetGenerator &operator=(const TargetGenerator &x);
    
    public:
    TargetGenerator(){}
    ~TargetGenerator(){}
    void    learnTargetType(ATarget *t);
    void forgetTargetType(std::string const &t);
    ATarget* createTarget(std::string const &t);
};

#endif