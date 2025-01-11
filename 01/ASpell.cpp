#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const& name, std::string const& effects)
{
    this->name_ = name;
    this->effects_ = effects;
}

ASpell::ASpell(ASpell const& aspell)
{
    *this = aspell;
}

ASpell& ASpell::operator=(ASpell const& aspell)
{
    if (this != &aspell)
    {
        this->name_ = aspell.name_;
        this->effects_ = aspell.effects_;
    }
    return *this;
}

ASpell::~ASpell() {}

std::string const &ASpell::getName() const
{
    return this->name_;
}

std::string const &ASpell::getEffects() const
{
    return this->effects_;
}

void ASpell::launch(ATarget const& target) const
{
    target.getHitBySpell(*this);
}