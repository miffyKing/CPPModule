#ifndef WANIM_H
#define WANIM_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
  std::string type_;

public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &wrongAnimal);
  WrongAnimal &operator=(const WrongAnimal &ref);
  virtual ~WrongAnimal();

  void makeSound(void) const;
  std::string getType() const;
};

#endif