#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    this->type = "Inconspicuous Red-brick Wall";
}

BrickWall::BrickWall(const BrickWall &d)
{
    *this = d;
}

BrickWall &BrickWall::operator=(const BrickWall &d)
{
    this->type = d.type;
    return *this;
}

BrickWall *BrickWall::clone() const
{
    return new BrickWall;
}