/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:50:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 00:58:33 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal& src) {
	std::cout << "Animal Copy Ctor called" << std::endl;
	this->type = src.getType();
}

Animal&	Animal::operator=(const Animal& rhs) {
	std::cout << "Animal Assign op called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::getType(void) const {
	return type;
}

void Animal::makeSound(void) {
	std::cout << "animal sound" << std::endl;
}
