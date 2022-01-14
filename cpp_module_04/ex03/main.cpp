/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:27:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/14 19:36:36 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	{
		AMateria *tmp = new Ice();
		src->learnMateria(tmp);
		delete tmp;
	}

	std::cout << "\n\n";
	ICharacter* me = new Character("me");

	AMateria* tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	{
		AMateria *tmp = src->createMateria("ice");
		me->equip(tmp);
		delete tmp;
	}
	me->unequip(1);
	delete tmp;

	ICharacter* bob = new Character("bob");

	std::cout << "\n\n";
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);

	std::cout << "\n\n";
	Character chris;
	chris = *(Character*)me;
	me->equip(src->createMateria("ice"));
	me->use(1, chris);
	chris.use(1, chris);

	delete(me);
	delete(bob);
	delete(src);
	return 0;
}
