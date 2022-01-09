/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:10:06 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 18:07:18 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

const int FragTrap::default_hitpoints = 100;
const int FragTrap::default_energypoints = 100;
const int FragTrap::default_attackdamage = 30;

FragTrap::FragTrap() : ClapTrap() {
	_hitpoints = FragTrap::default_hitpoints;
	_energypoints = FragTrap::default_energypoints;
	_attack_damage = FragTrap::default_attackdamage;
	std::cout << "FragTrap " << _name << ": Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitpoints = FragTrap::default_hitpoints;
	_energypoints = FragTrap::default_energypoints;
	_attack_damage = FragTrap::default_attackdamage;
	std::cout << "FragTrap " << _name << ": Constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << ": Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref) {
	_name = ref._name;
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "FragTrap " << _name << ": Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ref) {
	_name = ref._name;
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "FragTrap " << _name << ": Assign operator called" << std::endl;
	return *this;
}

void FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << 	_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << _name << " requested high five." << std::endl;
}
