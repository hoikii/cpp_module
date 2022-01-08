/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:10:06 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 01:45:59 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_name = "noname";
	_hitpoints = 100;
	_energypoints = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << _name << ": Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hitpoints = 100;
	_energypoints = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << _name << ": Constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << ": Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref) {
	_name = ref._name;
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "ScavTrap " << _name << "Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ref) {
	_name = ref._name;
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "ScavTrap " << _name << "Assign operator called" << std::endl;
	return *this;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << 	_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " has entered in Gate Keeper mode." << std::endl;
}
