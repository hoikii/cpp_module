/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:14:46 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 14:26:04 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "concrete_forms/ShrubberyCreationForm.hpp"
#include "concrete_forms/RobotomyRequestForm.hpp"
#include "concrete_forms/PresidentialPardonForm.hpp"

int main() {
	Form *scform = new ShrubberyCreationForm("TargetTree");
	Form *rrform = new RobotomyRequestForm("target_of_robotomy");
	Form *ppform = new PresidentialPardonForm("marvin");
	Bureaucrat me("me", 150);

	me.executeForm(*ppform);

	while (me.getGrade() > 5)
		me.increaseGrade();
	me.executeForm(*ppform);


	std::cout << "\n\n";
	me.signForm(*ppform);
	me.executeForm(*ppform);
	
	std::cout << "\n\n";
	me.signForm(*rrform);
	me.executeForm(*rrform);
	
	std::cout << "\n\n";
	me.signForm(*scform);
	me.executeForm(*scform);
		
	return 0;
}
