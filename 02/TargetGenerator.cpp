#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget*>::iterator it = targets_.begin();
    for(; it != targets_.end(); it++)
        delete it->second;
    targets_.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
        targets_.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const& type)
{
    if (targets_.find(type) != targets_.end())
        delete targets_[type];
    targets_.erase(type);
}

ATarget *TargetGenerator::createTarget(std::string const &targetType)
{
    std::map<std::string, ATarget *>::iterator it = targets_.find(targetType);
    if (it != targets_.end())
        return it->second->clone();
    return nullptr;
}
