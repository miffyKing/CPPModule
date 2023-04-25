#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::Contact(std::string FirstName)
{
    first_name = FirstName;
}
const std::string Contact::get_first_name()
{
    return first_name;
}
ㅌ