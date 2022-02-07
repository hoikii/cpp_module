/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:47:27 by kanlee            #+#    #+#             */
/*   Updated: 2022/02/07 18:54:44 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include "mutantstack.hpp"

int main() {

	MutantStack<int> myst;

	myst.push(1);
	myst.push(2);
	myst.push(3);
	myst.push(4);
	myst.push(5);

	MutantStack<int>::iterator it;
	for (it = myst.begin(); it != myst.end(); ++it)
		std::cout << *it << "\n";
	std::cout << "\n";

	MutantStack<int>::reverse_iterator rit;
	for (rit = myst.rbegin(); rit != myst.rend(); ++rit)
		std::cout << *rit << "\n";
	std::cout << "\n";


	MutantStack<int> myst2(myst);
	myst2 = *&myst2;
	myst = myst2;

	while (!myst.empty()) {
		std::cout << myst.top() << "\n";
		myst.pop();
	}

	return 0;
}
