#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell();
        ASpell(std::string const& name, std::string const& effects);
        ASpell(ASpell const& other);
        ASpell& operator=(ASpell const& other);
        virtual ~ASpell();

        std::string const& getName() const;
        std::string const& getEffects() const;

        virtual ASpell* clone() const = 0;

        void launch(ATarget const& target) const;

    private:
        std::string name;
        std::string effects;
};
