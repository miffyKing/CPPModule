/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chobyounghwa <chobyounghwa@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:52:12 by bcho              #+#    #+#             */
/*   Updated: 2023/04/25 00:59:19 by chobyounghw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string command;
    PhoneBook pb;
    Contact ct;
    
    while(1)
    {
        // ctrl + d 입력시 종료 시키기.
        
        std::cout<<"Input Command:: ";
        
        std::cin>>command;
        if (command == "ADD")
        {
            pb.add_contact();
        }
        else if (command == "SEARCH")
        {

        }
        else if (command == "EXIT")
        {

        }
        else 
        {
            
        }
        // std::cout<<command;
    }   
    return 0;
}