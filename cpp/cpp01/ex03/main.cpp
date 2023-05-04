#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }

  { // when weapon has no type //
    Weapon gongpotan = Weapon();

    HumanA *yback = new HumanA("yback", gongpotan);
    yback->attack();
    HumanB *dayun = new HumanB("dayun");
    dayun->setWeapon(gongpotan);
    dayun->attack();
  }

  { // when weapon has no type //
    Weapon gongpotan = Weapon();
    // std::cout<< "!!" << gongpotan.a <<"\n";

    if (gongpotan.getType() != "") // 이렇게 확인해야 하는 것 같군. 디폴트 생성자로 객체 만들면 멤버 변수들이 어떻게 되는거지
    {
      std::cout << "Should not print this \n\n";
      HumanA *yback = new HumanA("yback", gongpotan);
      yback->attack();
      HumanB *dayun = new HumanB("dayun");
      dayun->setWeapon(gongpotan);
      dayun->attack();
    }

    Weapon realtan = Weapon("Im real");
    if (!realtan.getType().empty())
    {
      std::cout << "Should print this\n\n";
      HumanA *yback = new HumanA("yback", realtan);
      yback->attack();
      HumanB *dayun = new HumanB("dayun");
      dayun->setWeapon(realtan);
      dayun->attack();
    }
  }

  // weapon 을 디폴트 생성자로 만들면, 타입이 비어있는 웨폰이 된다.
  //  이 웨폰을 휴먼A, 휴먼B 에 넣으면 당연히 문제없이 들어갈 것. -> 이상태로 어택을 갈기면?
  //
  return 0;
}