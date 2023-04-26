/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcho <bcho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:44:14 by bcho              #+#    #+#             */
/*   Updated: 2023/04/25 19:11:34 by bcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string first_name_;
        std::string last_name_;
        std::string nick_name_;
        std::string phone_number_;
        std::string darkest_secret_;
    
    public:
        Contact();
        Contact(std::string FirstName,
                std::string LastName,
                std::string NickName,
                std::string PhoneNumber,
                std::string DarkestSecret);
        ~Contact();
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_phone_number();
        std::string get_darkest_secret();
};

#endif