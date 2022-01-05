/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanC.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:02:26 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 03:17:58 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanC.hpp"
#include "Weapon.hpp"

using std::cout;
using std::endl;

HumanC::HumanC(std::string name, Weapon w) {
	this->name = name;
	this->weapon = w;
}

void HumanC::attack(void) {
	cout << this->name << " attacks with his " << this->weapon.getType() << endl;
}
