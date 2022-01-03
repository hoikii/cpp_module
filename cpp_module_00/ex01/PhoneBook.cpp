/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 02:48:33 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/03 16:24:53 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::endl;

PhoneBook::PhoneBook() {
	size = 0;
	start_idx = 0;
}

std::string PhoneBook::in_criteria(std::string msg)
{
	std::string str;

	while (str.empty() && !cin.eof())
	{
		cout << msg;
		getline(cin, str);
	}
	return str;
}

void PhoneBook::add(void) {
	std::string firstname = PhoneBook::in_criteria("first name:");
	std::string lastname = PhoneBook::in_criteria("last name:");
	std::string nickname = PhoneBook::in_criteria("nickname:");
	std::string phonenum = PhoneBook::in_criteria("phone number:");
	std::string secret = PhoneBook::in_criteria("darkest secret:");
	int idx;
	if (size < MAX_CONTACTS)
		idx = size++;
	else
	{
		idx = start_idx;
		start_idx = (start_idx + 1) % MAX_CONTACTS;
	}
	contacts[idx].set(firstname, lastname, nickname, phonenum, secret);
}

void PhoneBook::show_header(void)
{
	cout << "-------------------------------------------\n";
	cout << std::setw(11) << std::right << "idx|";
	cout << std::setw(11) << "firstname|";
	cout << std::setw(11) << "lastname|";
	cout << std::setw(10) << "nickname\n";
	cout << "----------|----------|----------|----------\n";
}

void PhoneBook::show_list(void) {
	for (int i = 0; i < size; i++)
	{
		int cur = (start_idx + i) % MAX_CONTACTS;
		cout << std::setw(10) << (i + 1) << "|";
		contacts[cur].show_abstract();
	}
	cout << "-------------------------------------------" << endl;
}

int PhoneBook::in_num(void) {
	std::string str;
	int n = 0;

	while (!cin.eof())
	{
		cout << "Select idx number(0 to calcel): ";
		getline(cin, str);
		std::stringstream s(str);
		if (s >> n && n <= size)
			break;
	}
	return n;
}

void PhoneBook::search(void) {
	if (size == 0)
	{
		cout << "Phonebook is empty!" << endl;
		return ;
	}
	PhoneBook::show_header();
	PhoneBook::show_list();
	int idx = PhoneBook::in_num();
	if (idx == 0)
		return ;
	idx = (idx - 1 + start_idx) % MAX_CONTACTS;
	contacts[idx].show_full();
}
