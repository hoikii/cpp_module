/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:13:30 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 13:19:43 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string n, int sG, int eG) :
	name(n), isSigned(false), signGrade(sG), exeGrade(eG) {
	if (signGrade < 1 || exeGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || exeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form& ref) :
	name(ref.name), signGrade(ref.signGrade), exeGrade(ref.exeGrade) {
	isSigned = ref.isSigned;
}

Form& Form::operator=(const Form& rhs) {
	isSigned = rhs.isSigned;
	return *this;
}

std::string Form::getName() const { return name; }

bool Form::getIsSigned() const { return isSigned; }

int Form::getSignGrade() const { return signGrade; }
int Form::getExeGrade() const { return exeGrade; }

void Form::beSigned(const Bureaucrat& who) {
	if (who.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	isSigned = true;
}
void Form::chkExecutable(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->getExeGrade())
		throw Form::GradeTooLowException();
	if (!this->getIsSigned())
		throw Form::FormNotSignedException();
}

const char* Form::GradeTooHighException::what() const throw() {
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "FormException: Grade too Low";
}

const char* Form::FormNotSignedException::what() const throw() {
	return "FormException: Form not signed";
}

std::ostream& operator<<(std::ostream& out, Form& ref) {
	out << "Form " << ref.getName() \
		<< "(" << ref.getSignGrade() << "," << ref.getExeGrade() \
		<< ") is " << (ref.getIsSigned() ? "" : "not ") << "signed.";
	return out;
}
