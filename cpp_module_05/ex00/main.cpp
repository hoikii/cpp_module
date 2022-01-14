/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:14:46 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 01:08:00 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	Bureaucrat b1("aaaa", 35);
	std::cout << b1 << std::endl;

	b1.increaseGrade();
	std::cout << b1 << std::endl;
	b1.increaseGrade();
	std::cout << b1 << std::endl;
	b1.decreaseGrade();
	std::cout << b1 << std::endl;
	b1.decreaseGrade();
	std::cout << b1 << std::endl;

	std::cout << "\n\n";
	try {
		Bureaucrat test("bbb", 0);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat test("bbb", 151);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\n";
	try {
		Bureaucrat test("test", 150);
		std::cout << test << std::endl;
		test.decreaseGrade();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\n";
	try {
		Bureaucrat test("test", 1);
		std::cout << test << std::endl;
		test.increaseGrade();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
