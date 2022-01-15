/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 02:53:07 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 14:24:32 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

#define TITLE "Robotomy_Request"
#define NEEDED_SIGN 72
#define NEEDED_EXEC 45

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form(TITLE, NEEDED_SIGN, NEEDED_EXEC), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
	: Form(TITLE, NEEDED_SIGN, NEEDED_EXEC), target(ref.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
	this->target = rhs.target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	Form::chkExecutable(executor);	// throws GradeTooLow or FormNotSigned
	std::cout << "** ~~~drrriiiillll~~~ **\n";
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "** " << target << " has been robotomized. **" << std::endl;
	else
		std::cout << "** " << "Oops, robotomize " << target << " is failed. **" << std::endl;
}
