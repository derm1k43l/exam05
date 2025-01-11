#pragma once
#include <iostream>

class ASpell;

class ATarget
{
    public:
        ATarget();
        ATarget(std::string const& type);
        ATarget(ATarget const& atarget);
        ATarget& operator=(ATarget const& atarget);
        virtual ~ATarget();

        std::string const &getType() const;

        virtual ATarget* clone() const = 0;

        void getHitBySpell(ASpell const& aspell) const;

    protected:
        std::string type_;
};

#include "ASpell.hpp"