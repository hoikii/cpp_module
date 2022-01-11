/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:13:48 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/11 16:52:46 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(int ac, char **av) {
	if (ac == 1) {
		Animal *meta = new Animal();
		Animal *cat = new Cat();
		Animal *dog = new Dog();
		std::cout << "\n\n";

		std::cout << meta->getType() << ": ";
		meta->makeSound();

		std::cout << cat->getType() << ": ";
		cat->makeSound();

		std::cout << dog->getType() << ": ";
		dog->makeSound();

		std::cout << "\n\n";
		delete meta;
		delete cat;
		delete dog;
	}

	else if (std::string(av[1]) == "test")

	{
		WrongAnimal *meta = new WrongAnimal();
		WrongAnimal *cat = new WrongCat();
		std::cout << "\n\n";

		std::cout << meta->getType() << ": ";
		meta->makeSound();

		std::cout << cat->getType() << ": ";
		cat->makeSound();

		std::cout << "\n\n";
		delete meta;
		delete cat;
	}

	return 0;
}
