#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

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
        std::string name_;
        std::string title_;

        Warlock();
        Warlock(Warlock const& warlock);
        Warlock& operator=(Warlock const& warlock);

        std::map<std::string, ASpell*> spells_;
};
