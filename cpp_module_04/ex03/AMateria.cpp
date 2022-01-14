/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:18:20 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/14 15:19:45 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) {
	this->type = type;
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria& ref) {
	this->type = ref.type;
}

AMateria& AMateria::operator=(const AMateria& rhs) {
	this->type = rhs.type;
	return *this;
}


std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "This should not be called" << std::endl;
}
