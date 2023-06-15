#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  Animal animal1;
  Cat cat1;
  Dog dog1;

  std::cout << "==============================\n";
  animal1.makeSound();
  cat1.makeSound();
  dog1.makeSound();
  std::cout << "==============================\n";

  Animal cat2 = Cat();
  Animal dog2 = Dog();

  std::cout << "==============================\n";
  cat2.makeSound();
  dog2.makeSound();
  std::cout << "==============================\n";

  std::cout << "============given main func ============\n";
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  delete i;
  delete j;
  delete meta;
  std::cout << "========================================\n";

  std::cout << " =======LETS CHECK WRONG ANIMAL ========\n";
  const WrongAnimal *wrongMeta = new WrongAnimal();
  const WrongAnimal *wrongCat = new WrongCat();
  wrongMeta->makeSound();
  wrongCat->makeSound();

  return 0;
}