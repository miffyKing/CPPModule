/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcho <bcho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:52:12 by bcho              #+#    #+#             */
/*   Updated: 2023/04/25 19:11:37 by bcho             ###   ########.fr       */
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
        std::cout<<"Input Command:: ";
		std::getline(std::cin, command);
        pb.check_eof();
        
        if (command == "ADD")
        {
            pb.add_contact();
        } else if (command == "SEARCH") {
            pb.search_contact();
        } else if (command == "EXIT") {
            std::cout<< "BYE BYE \n";
            break;
        } else {
            std::cout<< "ERROR: WRONG INPUT\n";
        }
    }   
    return 0;
}