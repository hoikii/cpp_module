/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:50:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 01:03:43 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	std::cout << "WrongAnimal Copy Ctor called" << std::endl;
	this->type = src.getType();
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs ) {
	std::cout << "WrongAnimal Assign op called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string WrongAnimal::getType(void) const {
	return type;
}

void WrongAnimal::makeSound(void) {
	std::cout << "WrongAnimal sound" << std::endl;
}
