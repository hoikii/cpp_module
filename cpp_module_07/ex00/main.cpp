/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:08:25 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/18 22:06:29 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main() {
	{
		int a = 3, b = 99;
		std::cout << "a=" << a << ", b=" << b << "\n";
		swap(a, b);
		std::cout << "a=" << a << ", b=" << b << "\n";
		std::cout << "min=" << min(a, b) << ", max=" << max(a, b) << "\n\n";
	}

	{
		double a = -5, b = 7.33;
		std::cout << "a=" << a << ", b=" << b << "\n";
		swap(a, b);
		std::cout << "a=" << a << ", b=" << b << "\n";
		std::cout << "min=" << min(a, b) << ", max=" << max(a, b) << "\n\n";
	}

	{
		std::string a = "abc", b = "xyz";
		std::cout << "a=" << a << ", b=" << b << "\n";
		swap(a, b);
		std::cout << "a=" << a << ", b=" << b << "\n";
		std::cout << "min=" << min(a, b) << ", max=" << max(a, b) << "\n\n";
	}

	return 0;
}
