/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 02:50:21 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/03 15:47:03 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	PhoneBook pb;
	std::string cmd;

	cout << "Welcome!\n" << endl;
	while (!cin.eof()) {
		cout << "(ADD, SEARCH, EXIT) > ";
		std::getline(cin, cmd);
		if (cmd == "EXIT" || cmd == "X")
			break;
		else if (cmd == "ADD" || cmd == "A")
			pb.add();
		else if (cmd == "SEARCH" || cmd == "S")
			pb.search();
	}
	cout << "Bye!" << endl;
	return 0;
}
