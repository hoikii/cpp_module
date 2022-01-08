/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:52:38 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 01:46:41 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
	ScavTrap s1("aaa");
	ScavTrap s2("bbb");

	std::cout << "\n";

	s1.attack("bbb");
	s2.takeDamage(s1.getAttackDamage());
	s2.beRepaired(10);

	std::cout << "\n";

	s1.guardGate();

	std::cout << "\n";
	return 0;
}
