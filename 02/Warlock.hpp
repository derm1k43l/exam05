#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock
{
    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;

        void setTitle(std::string const& title);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const& spellName);
        void launchSpell(std::string const& spellName, ATarget const& target);
    
    private:
        Warlock();
        Warlock(Warlock const& warlock);
        Warlock& operator=(Warlock const& warlock);

        std::string name_;
        std::string title_;
        SpellBook spells_;
};
