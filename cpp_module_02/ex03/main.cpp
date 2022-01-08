/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:13:33 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/08 16:11:30 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {

	Point A = Point(Fixed(0), Fixed(0));
	Point B = Point(1, 1);
	Point C = Point(2, 0);

	std::cout << "Triangle ABC is: " << A << "-" << B << "-" << C << std::endl;


	Point P1 = Point(1, 0.5f);
	std::cout << P1 << " is " << (bsp(A, B, C, P1) ? "" : "not ") << "inside of ABC" << std::endl;

	Point P2 = Point(-1, -1);
	std::cout << P2 << " is " << (bsp(A, B, C, P2) ? "" : "not ") << "inside of ABC" << std::endl;

	Point P3 = Point(0, 0);
	std::cout << P3 << " is " << (bsp(A, B, C, P3) ? "" : "not ") << "inside of ABC" << std::endl;


	return 0;
}
