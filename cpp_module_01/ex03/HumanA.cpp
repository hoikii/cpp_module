/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:02:26 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 18:05:36 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

using std::cout;
using std::endl;

#if 1
HumanA::HumanA(std::string name, Weapon &w) : name(name), weapon(w) {}
#else
HumanA::HumanA(std::string name, Weapon &w)
{
	this->name = name;
	this->weapon = w;
}
#endif

void HumanA::attack(void) {
	cout << this->name << " attacks with his " << this->weapon.getType() << endl;
}
