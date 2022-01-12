/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 23:03:29 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor called" << std::endl;
	this->type = "Cat";
	brain_p = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete brain_p;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << "Cat Copy Ctor called" << std::endl;
#if 1
	brain_p = new Brain(*src.brain_p);
#else
	brain_p = src.brain_p;
#endif
}

Cat&	Cat::operator=(const Cat& rhs) {
	std::cout << "Cat Assign op called" << std::endl;
	Animal::operator=(rhs);
	Brain *bak = brain_p;
	brain_p = new Brain;
#if 1
	*brain_p = *(rhs.brain_p);
#else
	brain_p = rhs.brain_p;
#endif
	delete bak;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound(void) const {
	std::cout << "meow meow meow meow" << std::endl;
}

void Cat::pushIdea(std::string s) const {
	brain_p->pushIdea(s);
}

std::string Cat::popIdea() const {
	return brain_p->popIdea();
}

std::string Cat::prnIdeas() const {
	brain_p->prnIdeas();
	return std::string();
}
