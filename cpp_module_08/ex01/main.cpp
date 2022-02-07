/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:07:34 by kanlee            #+#    #+#             */
/*   Updated: 2022/02/07 16:35:22 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <cassert>
#include <climits>
#include "span.hpp"

int main() {
	Span sp(10);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(7);
	sp.addNumber(13);
	std::cout << "min span: " << sp.shortestSpan() << "\n";
	std::cout << "max span: " << sp.longestSpan() << "\n\n";

	sp.addNumber(INT_MIN);
	sp.addNumber(INT_MAX);
	std::cout << "min span: " << sp.shortestSpan() << "\n";
	std::cout << "max span: " << sp.longestSpan() << "\n\n";

	{
		Span sp(10);
		try {
			sp.shortestSpan();
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	// test copy constructor
	Span tmp(sp);
	sp.addNumber(INT_MAX);
	assert(sp.getSize() == tmp.getSize() + 1);
	assert(sp.shortestSpan() == 0);

	// test assign operator
	sp = tmp;
	assert(sp.shortestSpan() != 0);


	// pass range of iterators
	sp = Span(14);
	int arr[] = { 1,3,7,12 };
	sp.addNumber(arr, arr + 4);
	assert(sp.getSize() == 4);
	assert(sp.shortestSpan() == 2);
	assert(sp.longestSpan() == 5);

	std::vector<int> v(arr, arr + 4);
	sp.addNumber(v.begin(), v.end());
	assert(sp.getSize() == 8);
	assert(sp.longestSpan() == 11);

	std::list<int> l(arr, arr + 4);
	sp.addNumber(l.begin(), l.end());
	assert(sp.getSize() == 12);
	try {
		sp.addNumber(l.begin(), l.end());
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// {1,3,7,12} should be added thrice.
	sp.prn();
	std::cout << "test done without failure." << std::endl;
	return 0;
}
