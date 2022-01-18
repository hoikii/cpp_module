/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:21:55 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/18 15:44:46 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#ifdef TEST
# include <typeinfo>
#endif

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	int r = rand() % 3;
	switch(r) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return 0;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A - ";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B - ";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C - ";
	else
		std::cout << "unknown type\n";
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "A - ";
		return;
	} catch (std::exception &e) {}
	try {
		dynamic_cast<B&>(p);
		std::cout << "B - ";
		return;
	} catch (std::exception &e) {}
	try {
		dynamic_cast<C&>(p);
		std::cout << "C - ";
		return;
	} catch (std::exception &e) {}
	std::cout << "unknown type\n";
}

#ifdef TEST
void identify_by_typeinfo(Base* p) {
	std::cout << typeid(*p).name() << " - ";
}
#endif

int main() {
	srand(time(NULL));

	for (int i = 0; i < 30; i++) {
		Base* target = generate();

		identify(target);
		identify(*target);
#ifdef TEST
		identify_by_typeinfo(target);
#endif
		
		delete target;
	}
	return 0;
}
