/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:52:38 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 02:08:18 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main() {
	FragTrap f1("aaa");
	FragTrap f2("bbb");

	std::cout << "\n";

	f1.attack("bbb");
	f2.takeDamage(f1.getAttackDamage());
	f2.beRepaired(10);

	std::cout << "\n";

	f1.highFiveGuys();

	std::cout << "\n";
	return 0;
}
