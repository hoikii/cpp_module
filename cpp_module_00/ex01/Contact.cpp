/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 02:02:04 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/03 14:19:46 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

using std::cout;
using std::endl;

void Contact::set(std::string fn, std::string ln, std::string nn,
		std::string pn, std::string sec) {
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = sec;
}

void Contact::show_abstract(void) {
	if (first_name.length() > 10)
		cout << first_name.substr(0, 9) << ".";
	else
		cout << std::setw(10) << first_name;
	cout << "|";
	if (last_name.length() > 10)
		cout << last_name.substr(0, 9) << ".";
	else
		cout << std::setw(10) << last_name;
	cout << "|";
	if (nickname.length() > 10)
		cout << nickname.substr(0, 9) << ".";
	else
		cout << std::setw(10) << nickname;
	cout << "\n";
}

void Contact::show_full(void) {
	cout << "\n------------------------------";
	cout << "\nfirst name     : " << first_name;
	cout << "\nlast name      : " << last_name;
	cout << "\nnickname       : " << nickname;
	cout << "\nphone number   : " << phone_number;
	cout << "\ndarkest secret : " << darkest_secret;
	cout << "\n------------------------------\n" << endl;
}
