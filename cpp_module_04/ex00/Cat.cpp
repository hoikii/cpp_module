/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 00:55:49 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << "Cat Copy Ctor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs) {
	std::cout << "Cat Assign op called" << std::endl;
	Animal::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound(void) {
	std::cout << "meow meow meow meow" << std::endl;
}
