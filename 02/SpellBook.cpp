#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator it = spells_.begin();
    for (; it != spells_.end(); it++)
        delete it->second;
    spells_.clear();
}

void SpellBook::learnSpell(ASpell* spellName)
{
    if (spellName)
        spells_.insert(std::pair<std::string, ASpell*>(spellName->getName(), spellName->clone()));
}

void SpellBook::forgetSpell(std::string const& spellName)
{
    if (spells_.find(spellName) != spells_.end())
        delete spells_[spellName];
    spells_.erase(spellName);
}

ASpell* SpellBook::createSpell(std::string const& spellName)
{
    if (spells_.find(spellName) != spells_.end())
        return spells_[spellName];
    return nullptr;
}