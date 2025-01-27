#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const& type) : type_(type) {}
        
ATarget::ATarget(ATarget const& other)
{
    *this = other;
} 

ATarget& ATarget::operator=(ATarget const& other)
{
    if (this != &other)
        type_ = other.type_;
    return *this;
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const
{
    return type_;
}

void ATarget::getHitBySpell(ASpell const& spell) const
{
    std::cout << type_ << " has been " << spell.getEffects() << "!" << std::endl;
}
