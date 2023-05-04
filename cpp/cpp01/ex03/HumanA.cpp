#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)  : weapon_(weapon), name_(name) {}

HumanA::~HumanA() {}

void HumanA::attack()
{
  std::cout << this->name_ << " attacks with their ";
  std::cout << this->weapon_.getType() << "\n";
}
// 기본 생성자로 만들어져 무기가 없는 경우가 없어야 함. 무조건 무기가 있어야 해.
