#include "PhoneBook.hpp"
#include <iostream>


PhoneBook:: PhoneBook()
{

}

PhoneBook:: ~PhoneBook() {
  std::cout<< "destructor \n";
}

int PhoneBook:: add_contact() {
  std::string first_name;
  std::string last_name;
  std::string nick_name;
  std::string phone_number;
  std::string darkest_secret;

  std::cout<<"input first name:  ";
  std::cin>>first_name;

  std::cout<<"input last name:  ";
  std::cin>>last_name;

  std::cout<<"input nick name:  ";
  std::cin>>nick_name;

  std::cout<<"input phone number:  ";
  std::cin>>phone_number;

  std::cout<<"input darkest secret:  ";
  std::cin>>darkest_secret;

  Contact newContact(first_name, last_name, nick_name, phone_number, darkest_secret);

}