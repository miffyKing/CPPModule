/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcho <bcho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:11:47 by bcho              #+#    #+#             */
/*   Updated: 2023/04/25 19:11:49 by bcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include "Contact.hpp"

#define MAX_CONTACT_NUM 8
#define MAX_COL_WIDTH 10

class PhoneBook
{
    private:
        Contact contacts[MAX_CONTACT_NUM];
        int index;
        int count;
    
    public:
        PhoneBook();
        ~PhoneBook();
        
        int add_contact();
        void search_contact();
        void get_contact(int index);
        void check_eof(void);

};

#endif