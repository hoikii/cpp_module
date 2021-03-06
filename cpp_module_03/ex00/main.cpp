/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:52:38 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/09 16:53:16 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap c1("aaa");
	ClapTrap c2("bbb");

	std::cout << "\n";
	ClapTrap c3(c1);
	ClapTrap c4;
	c4 = c2;

	std::cout << "\n";
	c1.attack("bbb");
	c2.takeDamage(c1.getAttackDamage());
	c2.beRepaired(100);

	std::cout << "\n";
	return 0;
}
