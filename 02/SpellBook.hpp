#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellName);

        ASpell *createSpell(std::string const &spellName);

    private:
        std::map<std::string, ASpell *> spells_;
        
        SpellBook(SpellBook const &other);
        SpellBook& operator=(SpellBook const &other);

};