/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 00:57:12 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
	std::cout << "Wrongcat Copy Ctor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs) {
	std::cout << "Wrongcat Assign op called" << std::endl;
	WrongAnimal::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound(void) {
	std::cout << "meow meow meow meow" << std::endl;
}
