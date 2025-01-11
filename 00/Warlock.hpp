#pragma once
#include <iostream>

class Warlock
{
    public: 
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;

        void setTitle(std::string const& title);
        void introduce() const;

    private:
        std::string name_;
        std::string title_;

        Warlock();
        Warlock(Warlock const& other);
        Warlock& operator=(Warlock const& other);
};
