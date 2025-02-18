/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:27:50 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/06 16:35:04 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook phonebook;

	while (std::cin.eof() == false)
	{
		phonebook.Menu();

		std::getline(std::cin, input);

		if (std::cin.eof())
			return 0;

		if (input == "ADD")
			phonebook.AddContact();
		else if (input == "SEARCH")
			phonebook.DisplayContacts();
		else if (input == "EXIT")
			break;
		else
			std::cout << "invalid input"<< std::endl;

		std::cout << std::endl;
	}
}