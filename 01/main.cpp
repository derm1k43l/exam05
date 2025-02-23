#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "ATarget.hpp"
#include "ASpell.hpp"

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}

//  clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Warlock.cpp Fwoosh.cpp Dummy.cpp ATarget.cpp ASpell.cpp