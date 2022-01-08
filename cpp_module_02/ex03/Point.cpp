/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:55:32 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/08 16:03:36 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructor
Point::Point() : x(0), y(0) {}

Point::Point(const Fixed a, const Fixed b) : x(a), y(b) {}

// Destructor
Point::~Point() {}

// Copy Constructor
Point::Point(const Point& ref) : x(ref.x), y(ref.y) {}

// Assign operator
Point& Point::operator=(const Point& ref) {
	// You cannot assign because member variable is const
	(void)ref; /* unused */
	return *this;
}

// Minus operator - creates direction vector (without normalization)
Point Point::operator-(const Point& ref) const {
	Fixed tmp_x, tmp_y;

	tmp_x = x - ref.x;
	tmp_y = y - ref.y;
	return Point(tmp_x, tmp_y);
}

Fixed Point::getx(void) const {
	return x;
}

Fixed Point::gety(void) const {
	return y;
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
	out << "(" << p.getx() << ", " << p.gety() << ")";
	return out;
}
