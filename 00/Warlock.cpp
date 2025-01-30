#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title)
    : name_(name), title_(title) 
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name_ << ": My job here is done!" << std::endl;
}

std::string const& Warlock::getName() const
{
    return this->name_;
}
std::string const& Warlock::getTitle() const
{
    return this->title_;
}

void Warlock::setTitle(std::string const& title)
{
    this->title_ = title;
}

void Warlock::introduce() const
{
    std::cout << this->name_ << ": I am " << this->name_ << ", " << this->title_ << "!" << std::endl;
}