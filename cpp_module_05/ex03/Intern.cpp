/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:33:41 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 16:22:22 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Intern.hpp"
#include "concrete_forms/ShrubberyCreationForm.hpp"
#include "concrete_forms/RobotomyRequestForm.hpp"
#include "concrete_forms/PresidentialPardonForm.hpp"

const std::string Intern::forms[6] = { "shrubbery creation", "shrubbery_creation", "robotomy request", "robotomy_request", "presidential pardon", "presidential_pardon" };

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& ref) {
	(void)ref;
}

Intern& Intern::operator=(const Intern& rhs) {
	(void)rhs;
	return *this;
}

Form* Intern::makeForm(const std::string name, const std::string target) {
	std::string name_lower = toLower(name);
	int idx = -1;
	while (idx++ < 6)
		if (forms[idx] == name_lower)
			break;

	Form* f = NULL;
	switch (idx / 2) {
		case 0:
			f = new ShrubberyCreationForm(target);
			break;
		case 1:
			f = new RobotomyRequestForm(target);
			break;
		case 2:
			f = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Intern doesn't know about form name " << name << std::endl;
			throw Intern::InternMakeFormException();
	}
	std::cout << "Intern creates " << name << std::endl;
	return f;
}

std::string Intern::toLower(std::string s) {
	std::string ret;

	for (size_t i = 0; i < s.length(); i++)
		ret.push_back(std::tolower(s[i]));
	return ret;
}

const char* Intern::InternMakeFormException::what(void) const throw() {
	return "InternMakeFormException: Invalid form name";
}
