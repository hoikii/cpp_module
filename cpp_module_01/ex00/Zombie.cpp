/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:28:06 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/04 02:08:36 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	cout << "<" << name << "> destroyed" << endl;
}

void Zombie::announce(void) {
	cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << endl;
}
