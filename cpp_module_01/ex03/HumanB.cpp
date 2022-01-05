/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 02:31:42 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 10:15:37 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(std::string name) {
	this->name = name;
}

void HumanB::attack(void) {
	cout << this->name << " attacks with his " << this->weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon &w) {
	this->weapon = &w;
}
