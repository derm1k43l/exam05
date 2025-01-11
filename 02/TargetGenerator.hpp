#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &targetType);

        ATarget *createTarget(std::string const &targetType);

    private:
        std::map<std::string, ATarget *> targets_;

        TargetGenerator(TargetGenerator const &other);
        TargetGenerator& operator=(TargetGenerator const &other);
};