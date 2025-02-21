/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:01:48 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/21 20:41:37 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ididiididi  220934ididi # ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook {
	private:
		int	index_tracker;
		Contact contacts[8];
	public :
		PhoneBook();
		~PhoneBook();
		void Menu();
		void AddContact();
		void DisplayContacts();
};

#endif
