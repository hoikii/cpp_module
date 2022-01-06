/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:14:38 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/06 22:50:44 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

using std::cout;
using std::endl;

std::string Karen::level_str[MAX_LVL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
void (Karen::*Karen::f[MAX_LVL])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

void Karen::debug(void) {
	cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << endl;
}

void Karen::info(void) {
	cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << endl;
}

void Karen::warning(void) {
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << endl;
}

void Karen::error(void) {
	cout << "This is unacceptable, I want to speak to the manager now." << endl;
}

void Karen::complain(std::string level)
{
	for (int i = 0; i < MAX_LVL; i++) {
		if (level_str[i] == level)
		{
			cout << "[" << level << "] ";
			return (this->*Karen::f[i])();
		}
	}
	cout << level << ": unknown level" << endl;
}
