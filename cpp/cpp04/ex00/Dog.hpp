#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal {

public:
  Dog();
  Dog(const Dog&ref);
  Dog& operator=(const Dog& dog);
  virtual ~Dog();

  void makeSound() const;

};
#endif