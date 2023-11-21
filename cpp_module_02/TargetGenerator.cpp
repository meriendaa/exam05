#include "TargetGenerator.hpp"

void    TargetGenerator::learnTargetType(ATarget *t)
{
	if (!t)
		return ;
	for (size_t i = 0; i < this->targets.size(); i++)
	{
		if (this->targets[i]->getType() == t->getType())
			return ;
	}
    this->targets.push_back(t);
}

void    TargetGenerator::forgetTargetType(std::string const &t)
{
    for (size_t i = 0; i < targets.size(); i++)
    {
        if (targets[i]->getType() == t)
        {
            this->targets.erase(targets.begin() + i);
            break ;
        }
    }
}

ATarget     *TargetGenerator::createTarget(std::string const &t)
{
    for (size_t i = 0; i < targets.size(); i++)
    {
        if (targets[i]->getType() == t)
            return (targets[i]);
    }
    return (NULL);
}
