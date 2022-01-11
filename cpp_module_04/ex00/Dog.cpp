/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/11 16:20:25 by kanlee           ###   ########.fr       */
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

Dog::Dog( const Dog & src ) {
	this->type = src.getType();
}

Dog&	Dog::operator=( Dog const & rhs )
{
	this->type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) {
	std::cout << "bauf bauf bauf bauf" << std::endl;
}