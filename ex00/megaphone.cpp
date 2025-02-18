/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:07:28 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/12 19:30:51 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc >= 2) {
		for (int i = 1; i < argc; i++) {
			std::string str = argv[i];
			for (size_t j = 0; j < str.length(); j++) {
				std::cout << (char)std::toupper(str[j]);;
			}
		}
		std::cout << std::endl;
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}
