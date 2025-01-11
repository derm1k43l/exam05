#pragma once
#include <iostream>

class ATarget;

class ASpell
{
    public:
        ASpell();
        ASpell(std::string const& name, std::string const& effects);
        ASpell(ASpell const& aspell);
        ASpell& operator=(ASpell const& aspell);
        virtual ~ASpell();

        std::string const &getName() const;
        std::string const &getEffects() const;

        virtual ASpell* clone() const = 0;

        void launch(ATarget const& target) const;

    private:
        std::string name_;
        std::string effects_;
};

#include "ATarget.hpp"