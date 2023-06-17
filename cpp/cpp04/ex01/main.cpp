#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


#include <iostream>

int main()
{
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;
  delete i;


  Animal *animals[10];
  for (int i = 0; i < 5; i++)
  {
    animals[i] = new Dog();
  }
  for (int i = 5; i < 10; i++)
  {
    animals[i] = new Cat();
  }

  for (int i = 0; i < 10; i++)
  {
    delete animals[i];
  }
  
  std::cout<<"\n\n================================================\n\n";

  Cat cat1;

  std::cout << cat1.getBrain()->getIdeas(2) <<"\n";


  //system("leaks a.out");
  return 0;
}