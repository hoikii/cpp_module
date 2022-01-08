/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:54:49 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 01:42:08 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "noname";
	_hitpoints = 10;
	_energypoints = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << ": Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_hitpoints = 10;
	_energypoints = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << ": Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << ": Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref) {
	_name = ref._name;
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "ClapTrap " << _name << "Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref) {
	_name = ref._name;
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "ClapTrap " << _name << "Assign operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << 	_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << "(HP=" << _hitpoints << ") takes damage " << amount;
	_hitpoints -= amount;
	if (_hitpoints < 0)
		_hitpoints = 0;
	std:: cout << ". HP is now " << _hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << "(HP=" << _hitpoints << ") get repaired by " << amount;
	_hitpoints += amount;
	std::cout << ". HP is now " << _hitpoints << std::endl;
}

std::string ClapTrap::getName(void) const {
	return _name;
}

int ClapTrap::getHitPoints(void) const {
	return _hitpoints;
}

int ClapTrap::getEnergyPoints(void) const {
	return _energypoints;
}

int ClapTrap::getAttackDamage(void) const {
	return _attack_damage;
}
