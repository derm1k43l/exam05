#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell:: ASpell(std::string const& name, std::string const& effect) 
    : name(name), effects(effect) {}

ASpell::ASpell(ASpell const& other)
{
    *this = other;
}

ASpell& ASpell::operator=(ASpell const& other)
{
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return *this;
}

ASpell::~ASpell() {}

std::string const& ASpell::getName() const
{
    return name;
}

std::string const& ASpell::getEffects() const
{
    return effects;
}

void ASpell::launch(ATarget const& target) const
{
    target.getHitBySpell(*this);
}