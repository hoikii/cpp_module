/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 23:04:22 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
	brain_p = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete brain_p;
}

Dog::Dog(const Dog& src) : Animal(src) {
	std::cout << "Dog Copy Ctor called" << std::endl;
	brain_p = new Brain(*src.brain_p);
}

Dog&	Dog::operator=(const Dog& rhs) {
	std::cout << "Dog Assign op called" << std::endl;
	Animal::operator=(rhs);
	Brain *bak = brain_p;
	brain_p = new Brain;
	*brain_p = *(rhs.brain_p);
	delete bak;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) const {
	std::cout << "woof woof woof woof" << std::endl;
}

void Dog::pushIdea(std::string s) const {
	brain_p->pushIdea(s);
}

std::string Dog::popIdea() const {
	return brain_p->popIdea();
}

std::string Dog::prnIdeas() const {
	brain_p->prnIdeas();
	return std::string();
}
