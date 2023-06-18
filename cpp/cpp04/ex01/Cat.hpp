#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
  Brain* brain;

public:
  Cat();
  Cat(const Cat&ref);
  Cat& operator=(const Cat& cat);
  virtual ~Cat();

  void makeSound() const;
  Brain* getBrain() const;
};

#endif