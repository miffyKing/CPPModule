#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
  Brain* brain;

public:
  Cat();
  Cat(Cat&ref);
  Cat& operator=(Cat& cat);
  virtual ~Cat();

  void makeSound() const;
  Brain* getBrain();
};

#endif