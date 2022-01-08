/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:13:33 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/08 11:15:53 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c = Fixed(3);
	Fixed d = Fixed( (a < b) + 1 );    // d = 2
	std::cout << "c + d = " << (c + d) << std::endl;
	std::cout << "c - d = " << (c - d) << std::endl;
	std::cout << "c * d = " << (c * d) << std::endl;
	std::cout << "c / d = " << (c / d) << std::endl;

	return 0;
}
