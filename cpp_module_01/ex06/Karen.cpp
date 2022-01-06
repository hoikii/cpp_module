/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:14:38 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/06 23:22:11 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

using std::cout;
using std::endl;

std::string Karen::level_str[MAX_LVL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
void (Karen::*Karen::f[MAX_LVL])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

void Karen::debug(void) {
	cout << "[ DEBUG ]" << endl;
	cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << endl;
}

void Karen::info(void) {
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << endl;
}

void Karen::warning(void) {
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << endl;
}

void Karen::error(void) {
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable, I want to speak to the manager now." << endl;
}

void Karen::complain(std::string level)
{
	int lvl_idx = -1;
	int fallthru_flag = 0;

	for (int i = 0; i < MAX_LVL; i++) {
		if (level_str[i] == level)
		{
			lvl_idx = i;
			break ;
		}
	}
	switch(lvl_idx) {
		case DEBUG:
			if (fallthru_flag)
				cout << endl;
			fallthru_flag = 1;
			debug();
			/* FALLTHRU */
		case INFO:
			if (fallthru_flag)
				cout << endl;
			fallthru_flag = 1;
			info();
			/* FALLTHRU */
		case WARNING:
			if (fallthru_flag)
				cout << endl;
			warning();
			/* FALLTHRU */
		case ERROR:
			if (fallthru_flag)
				cout << endl;
			fallthru_flag = 1;
			error();
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}
