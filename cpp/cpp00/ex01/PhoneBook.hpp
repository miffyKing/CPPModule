#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        int count;
    
    public:
        int add_contact();
        void search_contact();
        void get_contact(int index);
        void check_eof(void);

};