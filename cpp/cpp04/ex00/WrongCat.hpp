#ifndef WWrongCAT_H
#define WWrongCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
  WrongCat();
  WrongCat(const WrongCat&ref);
  WrongCat& operator=(const WrongCat& Wrongcat);
  virtual ~WrongCat();

  void makeSound() const;
};

#endif