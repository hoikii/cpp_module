/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 00:56:51 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	std::cout << "Dog Copy Ctor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs) {
	std::cout << "Dog Assign op called" << std::endl;
	Animal::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) {
	std::cout << "bauf bauf bauf bauf" << std::endl;
}
