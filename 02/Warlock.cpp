#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title)
    : name_(name), title_(title) 
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name_ << ": My job here is done!" << std::endl;
}

std::string const& Warlock::getName() const
{
    return name_;
}
std::string const& Warlock::getTitle() const
{
    return title_;
}

void Warlock::setTitle(std::string const& title)
{
    title_ = title;
}

void Warlock::introduce() const
{
    std::cout << name_ << ": I am " << name_ << ", " << title_ << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spellName)
{
    spells_.learnSpell(spellName);
}

void Warlock::forgetSpell(std::string const& spellName)
{
    spells_.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string const& spellName, ATarget const & target)
{
    if (spells_.createSpell(spellName))
        spells_.createSpell(spellName)->launch(target);
}
