#include <iostream>
#include "ATarget.hpp"
#include "BrickWall.hpp"
#include <map>

class TargetGenerator
{
    public:
        TargetGenerator();
        ~TargetGenerator();
    
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const& type);
        ATarget* createTarget(std::string const& type);
    
    private:
        std::map<std::string, ATarget *> targets_;

        TargetGenerator(TargetGenerator const& other);
        TargetGenerator& operator=(TargetGenerator const& other);
};