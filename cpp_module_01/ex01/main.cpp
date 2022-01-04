/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:53:08 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/04 03:08:11 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

using std::cout;
using std::endl;

int main() {
	int cnt = 9;

	Zombie *zbHorde = zombieHorde(cnt, "zbzb");

	for (int i = 0; i < cnt; i++)
		zbHorde[i].announce();

	delete[] zbHorde;

	return 0;
}
