/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:16:06 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/12 19:35:17 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool Contact::isValidNumber(std::string input)
{
    if (input.length() != 10 || input[0] != '0') {
        return false;
    }

	for (size_t i = 0; i < input.length(); i++)
	{
		if (std::isdigit(input[i]) == false)
			return false;
	}

    return true;
}

bool Contact::isValidInput(std::string input)
{
    if (input.empty())
        return false;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (std::isalpha(input[i]) == false)
			return false;
	}

    return true;
}

bool Contact::setDarkestSecret(std::string input)
{
    if (input.empty())
        return false;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (std::isprint(input[i]) == 0)
			return false;
	}

    darkestSecret = input;

    return true;
}

bool Contact::setPhoneNumber(std::string input)
{
    if (!isValidNumber(input))
        return false;
	phoneNumber = input;
    return true;
}

bool Contact::setLastName(std::string input)
{
    if (!isValidInput(input))
        return false;
    lastName = input;
    return true;
}

bool Contact::setFirstName(std::string input)
{
    if (!isValidInput(input)) {
        return false;
    }
    firstName = input;
    return true;
}

bool Contact::setNickName(std::string input)
{
    if (!isValidInput(input))
        return false;
    nickname = input;
    return true;
}

std::string Contact::getFirstName(bool shortValue)
{
	if (shortValue && firstName.length() > 10) {
        firstName = firstName.substr(0, 9) + "."; 
	}
	return firstName;
}
std::string Contact::getLastName(bool shortValue)
{
	if (shortValue && lastName.length() > 10) {
        lastName = lastName.substr(0, 9) + ".";
	}
	return lastName;
}
std::string Contact::getNickName(bool shortValue)
{
	if (shortValue && nickname.length() > 10) {
        nickname = nickname.substr(0, 9) + ".";
	}
	return nickname;
}
std::string Contact::getPhoneNumber()
{
	return phoneNumber;
}
std::string Contact::getDarkestSecret()
{
	return darkestSecret;
}

void Contact::ShowContact()
{
	std::cout << "| First Name: " << getFirstName() << std::endl;
	std::cout << "| Last Name: " << getLastName() << std::endl;
	std::cout << "| Nickname: " << getNickName() << std::endl;
	std::cout << "| Phone number: " << getPhoneNumber() << std::endl;
	std::cout << "| Darkest secret: " << getDarkestSecret() << std::endl;
}