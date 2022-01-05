/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 00:52:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 03:13:27 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string str) {
	this->type =str;
}

const std::string& Weapon::getType(void) {
	std::string &ref = type;
	return ref;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
