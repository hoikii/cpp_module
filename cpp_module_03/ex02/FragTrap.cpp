/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:10:06 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 17:24:50 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_hitpoints = 100;
	_energypoints = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << ": Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitpoints = 100;
	_energypoints = 100;
	_attack_damage = 30;
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
