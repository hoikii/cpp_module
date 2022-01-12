/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:13:48 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 23:28:52 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {

	// Animal aaa;
	// Compile error: Animal is Abstract, it's not instantiable.

	Animal *animals[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << "\n\n";

	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();

	std::cout << "\n\n";

	for (int i = 0; i < 10; i++)
		delete animals[i];



	std::cout << "\n\n================\n\n";

	Cat c1, c2;

	std::cout << "\n\n";

	c1.pushIdea("aaa");
	c1.pushIdea("bbb");
	c2 = c1;

	std::cout << "\n\n";

	std::cout << "c1's ideas: " << c1.prnIdeas() << std::endl;
	std::cout << "c2's ideas: " << c2.prnIdeas() << std::endl;
	std::cout << "put ccc to c1" << std::endl;
	c1.pushIdea("cc");
	std::cout << "c1's ideas: " << c1.prnIdeas() << std::endl;
	std::cout << "c2's ideas: " << c2.prnIdeas() << std::endl;

	std::cout << "\n\n";

	return 0;
}
