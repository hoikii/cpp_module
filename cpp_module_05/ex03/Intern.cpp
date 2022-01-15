/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:33:41 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 16:50:46 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Intern.hpp"
#include "concrete_forms/ShrubberyCreationForm.hpp"
#include "concrete_forms/RobotomyRequestForm.hpp"
#include "concrete_forms/PresidentialPardonForm.hpp"

const std::string Intern::forms[6] = { "shrubbery creation", "shrubbery_creation", "robotomy request", "robotomy_request", "presidential pardon", "presidential_pardon" };
Form* (Intern::*Intern::f[3])(const std::string s) = {&Intern::makeSCform, &Intern::makeRRform, &Intern::makePPform };

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& ref) {
	(void)ref;
}

Intern& Intern::operator=(const Intern& rhs) {
	(void)rhs;
	return *this;
}


Form* Intern::makeSCform(const std::string target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRRform(const std::string target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePPform(const std::string target) {
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(const std::string name, const std::string target) {
	std::string name_lower = toLower(name);
	int idx = -1;
	while (idx++ < 6)
		if (forms[idx] == name_lower) {
			std::cout << "Intern creates " << name << std::endl;
			return (this->*Intern::f[idx / 2])(target);
		}
	throw Intern::InternMakeFormException();
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
