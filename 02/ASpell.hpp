#pragma once
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell();
        ASpell(std::string const& name, std::string const& title);
        virtual ~ASpell();
        ASpell(ASpell const& other);
        ASpell& operator=(ASpell const& other);

        std::string const& getName() const;
        std::string const& getEffects() const;

        virtual ASpell* clone() const = 0;

        void launch(ATarget const& target) const;

    protected:
        std::string name;
        std::string effects;
};