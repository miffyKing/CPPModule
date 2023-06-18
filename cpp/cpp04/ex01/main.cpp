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

  Cat *cat1 = new Cat();
  Cat *cat2 = new Cat();

  std::cout << "cat1 2nd idea is " << cat1->getBrain()->getIdeas(2) << "\n";

  cat1->getBrain()->setIdea(" -- changed 2nd idea -- ", 2);

  std::cout << "changed cat1 2nd idea is " << cat1->getBrain()->getIdeas(2) << "\n";

  *cat2 = *cat1;

  std::cout << "cat2 2nd idea is " << cat2->getBrain()->getIdeas(2) << "\n";

  cat2->getBrain()->setIdea(" - - --- -- ---  -- ", 2);

  std::cout << "cat2 2nd idea is " << cat2->getBrain()->getIdeas(2) << "\n";

  std::cout << "cat2 changed and cat1 2nd idea is " << cat1->getBrain()->getIdeas(2) << "\n";

  delete cat1;
  delete cat2;
  
  return 0;
}