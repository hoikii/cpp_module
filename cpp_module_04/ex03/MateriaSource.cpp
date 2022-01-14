/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:11:36 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/14 18:01:38 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		msrc[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete msrc[i];
}

MateriaSource::MateriaSource(const MateriaSource& ref) {
	for (int i = 0; i < 4; i++)
		if (ref.msrc[i])
			msrc[i] = ref.msrc[i]->clone();
		else
			msrc[i] = NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
	for (int i = 0; i < 4; i++)
		if (rhs.msrc[i])
			msrc[i] = rhs.msrc[i]->clone();
		else
			msrc[i] = NULL;
	return*this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (msrc[i] == NULL) {
			std::cout << "source learned " << m->getType() << std::endl;
			msrc[i] = m;
			return;
		}
	std::cout << "source is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (msrc[i]->getType() == type) {
			return msrc[i]->clone();
		}
	}
	std::cout << "source doesn't know about " << type << std::endl;
	return 0;
}
