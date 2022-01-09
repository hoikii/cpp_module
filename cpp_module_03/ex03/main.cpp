/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:52:38 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 17:33:05 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap t1("ttt");

	std::cout << "\n";

	t1.whoAmI();
	std::cout << "hitpoints: " << t1.getHitPoints();
	std::cout << "\nEnerypoints: " << t1.getEnergyPoints();
	std::cout << "\nAttackdamage: " << t1.getAttackDamage() << std::endl;

	std::cout << "\n";

	t1.attack("bbb");
	t1.guardGate();
	t1.highFiveGuys();

	std::cout << "\n";
	return 0;
}
