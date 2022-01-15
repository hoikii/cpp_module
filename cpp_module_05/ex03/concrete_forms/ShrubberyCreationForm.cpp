/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 02:52:46 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 13:54:19 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

#define TITLE "Shrubbery_Creation"
#define NEEDED_SIGN 145
#define NEEDED_EXEC 137

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(TITLE, NEEDED_SIGN, NEEDED_EXEC), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
	: Form(TITLE, NEEDED_SIGN, NEEDED_EXEC), target(ref.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
	this->target = rhs.target;
	return *this;
}

void ShrubberyCreationForm::prnAsciiTree(std::string target) const {
	const char* tree = "\
    oxoxoo    ooxoo \n \
  ooxoxo oo  oxoxooo \n \
 oooo xxoxoo ooo ooox \n \
 oxo o oxoxo  xoxxoxo \n \
  oxo xooxoooo o ooo \n \
    ooo\\oo\\  /o/o \n \
        \\  \\/ / \n \
         |   / \n \
         |  | \n \
         | D| \n \
         |  | \n \
         |  | \n \
  ______/____\\____ \n \
		";

	std::ofstream outfile(target.c_str());
	if (outfile.is_open()) {
		outfile << tree << std::endl;
	}
	outfile.close();
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	Form::chkExecutable(executor);	// throws GradeTooLow or FormNotSigned
	prnAsciiTree(target + "_shrubbery");
}
