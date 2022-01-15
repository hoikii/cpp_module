/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:14:46 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 16:18:39 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "concrete_forms/ShrubberyCreationForm.hpp"
#include "concrete_forms/RobotomyRequestForm.hpp"
#include "concrete_forms/PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern intern;
		Form* rrf;

		rrf = intern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;

		std::cout << "\n\n";
		rrf = intern.makeForm("pReSidENtiAl_pARdoN", "Bender");
		std::cout << *rrf << std::endl;
		
		std::cout << "\n\n";
		rrf = intern.makeForm("form_that_intern_cant_handle", "Bender");
		std::cout << *rrf << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
