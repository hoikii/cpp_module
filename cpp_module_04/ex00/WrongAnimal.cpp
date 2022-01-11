/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:50:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/11 16:34:39 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) {
	this->type = src.getType();
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const & rhs )
{
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