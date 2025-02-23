#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title)
    : name_(name), title_(title) 
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << name_ << ": My job here is done!" << std::endl;
    std::map<std::string, ASpell*>::iterator it = spells_.begin();
    for (; it != spells_.end(); it++)
        delete it->second;
    spells_.clear();
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
    std::cout << name_ << ": I am " << name_ <<", " << title_ << "!" <<std::endl;
}
void Warlock::learnSpell(ASpell* spellName)
{
    if (spellName)
        spells_.insert(std::pair<std::string, ASpell*>(spellName->getName(), spellName->clone()));
}
void Warlock::forgetSpell(std::string const& spellName)
{
    if (spells_.find(spellName) != spells_.end())
        delete spells_[spellName];
    spells_.erase(spellName);
}
void Warlock::launchSpell(std::string const& spellName, ATarget const& target)
{
    if (spells_.find(spellName) != spells_.end())
        spells_[spellName]->launch(target);
}
