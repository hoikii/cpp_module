/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:02:26 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 10:02:46 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

using std::cout;
using std::endl;

HumanA::HumanA(std::string name, Weapon &w) : name(name), weapon(w)
{
}

void HumanA::attack(void) {
	cout << this->name << " attacks with his " << this->weapon.getType() << endl;
}
