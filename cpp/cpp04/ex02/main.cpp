#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

void check()
{
  system("leaks a.out");
}

int main()
{
  atexit(check);
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  // Animal animal();

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

  std::cout << "\n\n================================================\n\n";

  Cat cat1;

  std::cout << cat1.getBrain()->getIdeas(2) << "\n";

   
  return 0;
}