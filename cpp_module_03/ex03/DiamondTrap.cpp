/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:22:06 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 18:58:21 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	_name = "noname";
	ClapTrap::_name = _name + "_clap_name";
	_hitpoints = FragTrap::default_hitpoints;
	_energypoints = ScavTrap::default_energypoints;
	_attack_damage = FragTrap::default_attackdamage;
	std::cout << "DiamondTrap " << _name << ": Default Constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(std::string s) : ClapTrap(s + "_clap_name"), ScavTrap(s), FragTrap(s) {
	_name = s;
	_hitpoints = FragTrap::default_hitpoints;
	_energypoints = ScavTrap::default_energypoints;
	_attack_damage = FragTrap::default_attackdamage;
	std::cout << "DiamondTrap " << _name << ": Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << ": Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref) : ClapTrap(ref), ScavTrap(ref), FragTrap(ref) {
	_name = ref._name;
	ClapTrap::_name = _name + "_clap_name";
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "DiamondTrap " << _name << ": Copy Constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref) {
	_name = ref._name;
	ClapTrap::_name = _name + "_clap_name";
	_hitpoints = ref._hitpoints;
	_energypoints = ref._energypoints;
	_attack_damage = ref._attack_damage;
	std::cout << "DiamondTrap " << _name << ": Assign operator called" << std::endl;
	return *this;
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std:: cout << "I'm " << _name << ", and my clap_name is " << ClapTrap::_name << std::endl;
}
