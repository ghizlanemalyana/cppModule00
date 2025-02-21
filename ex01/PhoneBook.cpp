/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:41:02 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/21 20:21:110 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
	std::cout << "| ** Welcome to your phone book ** |" <<std::endl << std::endl;
	index_tracker = 0;
}

PhoneBook::~PhoneBook() {
	std::cout << std::endl << "| ** Good bye ** |" << std::endl;
}

void PhoneBook::Menu() {
	std::cout << "| * ADD"<< std::endl;
	std::cout << "| * SEARCH"<< std::endl;
	std::cout << "| * EXIT"<< std::endl << std::endl ;
	std::cout << "|-> Choose One option : ";;
}

void PhoneBook::AddContact() {
	Contact contact;

	contact.AddFirstName();
	contact.AddLastName();
	contact.AddNickName();
	contact.AddPhoneNumber();
	contact.AddDarkestSecret();

	if (std::cin.eof())
		return ;

	contacts[index_tracker] = contact;
	index_tracker++;
	if (index_tracker == 8)
		index_tracker = 0;

	std::cout << std::endl << "| ** The contact has been succesfully added ** |" <<std::endl;
}

void Contact::AddFirstName() {
	if (std::cin.eof())
		return ;

	std::string value;

	while (true) {
		std::cout << "Enter the first name: "; 
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ;
		if (setFirstName(value) == true)
			break;
		std::cout << "Invalid first name, try again!" << std::endl;
	}
}

void Contact::AddLastName() {
	if (std::cin.eof())
		return ;

	std::string value;
	
	while (true){
		std::cout << "Enter the last name: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
				return ;
		if (setLastName(value) == true)
			break;
		std::cout << "Invalid last name, try again!" << std::endl;
	}
}

void Contact::AddNickName() {
	if (std::cin.eof())
		return ;
	
	std::string value;
	
	while (true){
		std::cout << "Enter the nickname: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
				return ;
		if (setNickName(value) == true)
			break;
		std::cout << "Invalid nickname, try again!" << std::endl;
	}
}

void Contact::AddPhoneNumber() {
	if (std::cin.eof())
		return ;
	 
	std::string value;
	
	while (true){
		std::cout << "Enter the Phone number: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
				return ;
		if (setPhoneNumber(value) == true)
			break;
		std::cout << "Invalid phone number, try again!" << std::endl;
	}
}

void Contact::AddDarkestSecret() {
	if (std::cin.eof())
		return ;
	
	std::string value;
	
	while (true){
		std::cout << "Enter the darkes secret: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
				return ;
		if (setDarkestSecret(value) == true)
			break;
		std::cout << "Invalid darkes secret, try again!" << std::endl;
	}
}

void PhoneBook::DisplayContacts() {
	Contact contact;

	if (this->contacts[0].getFirstName().length() == 0)
	{
		std::cout << "| ** No contacts to display ** |" << std::endl;
		return ;
	}
	std::cout << std::endl << "|"
		<< std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << "|";
	std::cout << std::endl << std::endl;
	for (int i = 0; i < index_tracker; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << contacts[i].getShortFirstName() << "|";
		std::cout << std::setw(10) << contacts[i].getShortLastName() << "|";
		std::cout << std::setw(10) << contacts[i].getShortNickName() << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}

	std::cout << std::endl;

	while (true)
	{
		std::string input;
		std::cout << "| Enter the index of the contact you want to display: ";
		std::getline(std::cin, input);

		if (std::cin.eof())
			return ;

		if (input.length() != 1 || input[0] < '1' || input[0] > '8' || input[0] - '0' > index_tracker)
		{
			std::cout << "Invalid index, try again!" << std::endl;
			continue ;
		}
		contacts[input[0] - '1'].ShowContact();
		break ;
	}
}
