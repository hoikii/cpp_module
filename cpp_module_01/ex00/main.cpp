/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:53:08 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/04 02:11:09 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

using std::cout;
using std::endl;

int main() {

	Zombie *zb = newZombie("dynamicZombie");
	zb->announce();
	cout << "...do sth..." << endl;

	randomChump("staticZombie");
	cout << "...do sth..." << endl;

	delete zb;

	return 0;
}
