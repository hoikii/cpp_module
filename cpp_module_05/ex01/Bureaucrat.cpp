/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:14:12 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 02:09:14 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : name(ref.name), grade(ref.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	this->grade = rhs.grade;
	return *this;
}


std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}


void Bureaucrat::increaseGrade() {
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decreaseGrade() {
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form& form) {
	if (form.getIsSigned())
		std::cout << name << " cannot sign " << form.getName() << " because it's already signed." << std::endl;
	else if (grade > form.getSignGrade())
		std::cout << name << " cannot sign " << form.getName() << " because grade is lower than needed." << std::endl;
	else {
		std::cout << name << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "BureaucratException: Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what()  const throw() {
	return "BureaucratException: Grade too low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& ref) {
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return out;
}
