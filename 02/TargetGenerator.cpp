#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    for (std::map<std::string, ATarget *>::iterator it = targets_.begin(); it != targets_.end(); it++)
    {
        delete it->second;
    }
    targets_.clear();
}

// if i can compile then just make it and void other and return *this 

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &other) 
{
    (void)other;
    return *this;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        targets_[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &targetType)
{
    std::map<std::string, ATarget *>::iterator it = targets_.find(targetType);
    if (it != targets_.end())
    {
        delete it->second;
        targets_.erase(it);
    }
}

ATarget *TargetGenerator::createTarget(std::string const &targetType)
{
    std::map<std::string, ATarget *>::iterator it = targets_.find(targetType);
    if (it != targets_.end())
        return it->second->clone();
    return nullptr;
}

TargetGenerator::TargetGenerator(TargetGenerator const &other)
{
    *this = other;
}

