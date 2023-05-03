#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie* bcho = new Zombie("Bcho");
    bcho->announce();

    Zombie dayun("Dayun");
    dayun.announce();

    Zombie* zombieArray = zombieHorde(5, "hihi");
    for (int i = 0; i < 5; i++)
    {
        zombieArray[i].announce();
    }
    for (int i = 0; i < 5; i++)
    {
        delete zombieArray;
    }   //소멸자 사용법  [] 대괄호를 표시 해 전체를 해제해 주어야 한다.
    return 0;
}