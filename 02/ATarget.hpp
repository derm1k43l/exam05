#pragma once
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:
        ATarget();
        ATarget(std::string const& type);
        virtual ~ATarget();
        ATarget(ATarget const& other);
        ATarget& operator=(ATarget const& other);

        std::string const& getType() const;

        virtual ATarget* clone() const = 0;

        void getHitBySpell(ASpell const& spell) const;

    protected:
        std::string type_;
};