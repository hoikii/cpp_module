/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 02:53:25 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 13:22:47 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

#define TITLE "Presidential_Pardon"
#define NEEDED_SIGN 25
#define NEEDED_EXEC 5

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form(TITLE, NEEDED_SIGN, NEEDED_EXEC), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
	: Form(TITLE, NEEDED_SIGN, NEEDED_EXEC), target(ref.target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
	this->target = rhs.target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	Form::chkExecutable(executor);	// throws GradeTooLow or FormNotSigned
	std::cout << "** " << target << " has been pardoned by Zafod Beeblebrox. **" << std::endl;
}
