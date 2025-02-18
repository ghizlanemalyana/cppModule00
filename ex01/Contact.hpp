/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:21:05 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/11 16:33:19 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	
	private :
        std::string firstName;
		std::string lastName;
        std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

    public :
		bool setFirstName(std::string inpit);
		bool setLastName(std::string input);
		bool setNickName(std::string input);
		bool setPhoneNumber(std::string input);
		bool setDarkestSecret(std::string input);
		
		bool isValidInput(std::string input);
		bool isValidNumber(std::string input);

		std::string getFirstName(bool shortValue = false);
		std::string getLastName(bool shortValue = false);
		std::string getNickName(bool shortValue = false); 
		std::string getPhoneNumber();
		std::string getDarkestSecret();

		void AddFirstName();
		void AddLastName();
		void AddNickName();
		void AddPhoneNumber();
		void AddDarkestSecret();
		void ShowContact();
};

#endif