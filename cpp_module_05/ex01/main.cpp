/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:14:46 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 02:34:52 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	try {
		Form teset("form #151", 151, 1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form teset("form #0", 0, 1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\n";
	Bureaucrat marvin("marvin", 43);
	Form form42("form #42", 42, 100);
	std::cout << marvin << std::endl;
	std::cout << form42 << std::endl;
	marvin.signForm(form42);
	try {
		form42.beSigned(marvin);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\n";
	marvin.increaseGrade();
	marvin.signForm(form42);

	std::cout << "\n\n";
	marvin.signForm(form42);

	return 0;
}
