#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const& type) : type_(type) {}

ATarget::ATarget(ATarget const& atarget)
{
    *this = atarget;
} 

ATarget& ATarget::operator=(ATarget const& atarget)
{
    if (this != &atarget)
        this->type_ = atarget.type_;
    return *this;
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const
{
    return this->type_;
}

void ATarget::getHitBySpell(ASpell const& aspell) const
{
    std::cout << this->type_ << " has been " << aspell.getEffects() << "!" << std::endl;
}