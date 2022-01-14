/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:42:57 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/14 17:04:34 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character() { 
	this->name = "default_name";
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(std::string name) {
	this->name = name;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete slot[i];
}

Character::Character(const Character& ref) {
	this->name = ref.name;
	for (int i = 0; i < 4; i++)
		if (ref.slot[i])
			this->slot[i] = ref.slot[i]->clone();
		else
			this->slot[i] = NULL;
}

Character& Character::operator=(const Character& rhs) {
	std::cout << "Character Assign op called" << std::endl;
	if (this == &rhs)
		return *this;
	this->name = rhs.name;
	for (int i = 0; i < 4; i++) {
		delete slot[i];
		if (rhs.slot[i])
			slot[i] = rhs.slot[i]->clone();
		else
			slot[i] = NULL;
	}
	return *this;
}


std::string const & Character::getName(void) const {
	return name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (slot[i] == NULL) {
			slot[i] = m;
			std::cout << name << " equips " << m->getType() << " in inventory #" << i << std::endl;
			return;
		}
	}
	std::cout << name << "'s slot is full" << std::endl;
}

void Character::unequip(int idx) {
	if (!slot[idx])
		std::cout << name << "'s inventory #" << idx << " is empty" << std::endl;
	else {
		std::cout << name << " unequips " << slot[idx]->getType() << " in inventory #" << idx << std::endl;
		slot[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (!slot[idx])
		std::cout << name << "'s inventory #" << idx << " is empty" << std::endl;
	else {
		std::cout << name << " uses " << slot[idx]->getType() << " in inventory #" << idx << std::endl;
		slot[idx]->use(target);
	}
}