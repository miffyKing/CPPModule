#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)  : name_(name) {}


HumanB::~HumanB() {}

void HumanB::attack()
{
  std::cout << this->name_ << " attacks with their ";
  std::cout << this->weapon_->getType() << "\n";
}
// 기본 생성자로 만들어져 무기가 없는 경우가 없어야 함. 무조건 무기가 있어야 해.

void HumanB:: setWeapon(Weapon &weapon)
{
  this->weapon_ = &weapon;
}
