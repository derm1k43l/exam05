#pragma once
#include "ATarget.hpp"
#include "Dummy.hpp"

class Dummy: public ATarget
{
    public:
        Dummy();
        ~Dummy();
        virtual ATarget* clone() const;
};
