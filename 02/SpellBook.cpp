#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell *>::iterator it = spells_.begin(); it != spells_.end(); it++)
    {
        delete it->second;
    }
    spells_.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        spells_[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell *>::iterator it = spells_.find(spellName);
    if (it != spells_.end())
    {
        delete it->second;
        spells_.erase(it);
    }
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell *>::iterator it = spells_.find(spellName);
    if (it != spells_.end())
        return it->second->clone();
    return nullptr;
}