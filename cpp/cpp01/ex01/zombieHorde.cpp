#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieArray = new Zombie[N];    //동적 할당 어떻게 하는 건지..
    //Zombie *zombieArray[N];
    //Zombie zombieArray[N];


    for(int i = 0; i < N; i++)
    {
        char chunk = '0'+i; //변경방법이 뭐가 있을까?
        zombieArray[i].setName(name + chunk);
    }
    return zombieArray;
    
}