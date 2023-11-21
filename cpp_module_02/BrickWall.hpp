#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP
#include <iostream>
#include "ATarget.hpp"

class BrickWall :public ATarget
{
    public:
    BrickWall();
    BrickWall(const BrickWall &d);
    BrickWall &operator=(const BrickWall &d);
    ~BrickWall(){}
    virtual BrickWall *clone() const;
};

#endif