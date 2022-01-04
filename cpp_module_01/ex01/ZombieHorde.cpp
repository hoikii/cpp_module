/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 02:21:06 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/04 03:17:13 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zbHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << i;
		zbHorde[i].setName(name + ss.str());
	}

	return zbHorde;
}
