#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>

class Contact
{
    private:
        std::string first_name;
    
    public:
        Contact();
        Contact(std::string FirstName);
        
        const std::string get_first_name();

};