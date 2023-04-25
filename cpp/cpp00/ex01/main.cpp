/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcho <bcho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:52:12 by bcho              #+#    #+#             */
/*   Updated: 2023/04/25 17:19:43 by bcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook pb;
    Contact ct;
    
    while(1)
    {
        // ctrl + d 입력시 종료 시키기.
        std::cout<<"Input Command:: ";
		std::getline(std::cin, command);
        pb.check_eof();
        
        if (command == "ADD")
        {
            pb.add_contact();
        }
        else if (command == "SEARCH")
        {
            pb.search_contact();
        }
        else if (command == "EXIT")
        {
            std::cout<< "BYE BYE \n";
            break;
        }
        else 
        {
            std::cout<< "ERROR: WRONG INPUT\n";
            command = "\0";
        }
        // std::cout<<command;
    }   
    return 0;
}