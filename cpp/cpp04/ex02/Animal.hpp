#ifndef ANIM_H
#define ANIM_H

#include <iostream>
#include <string>

class Animal
{
protected:
  std::string type_;

public:
  Animal(void);
  Animal(const Animal &animal);
  Animal &operator=(const Animal &ref);
  virtual ~Animal();

  virtual void makeSound(void) const = 0;
  std::string getType() const;
};

#endif