/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:11:41 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/07 23:37:50 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

// ===================  Constructors  =====================
Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(int n) {
	std::cout << "Int constructor called" << std::endl;
	value = (n << frac_bits);
}

Fixed::Fixed(float f) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(f * (1 << frac_bits));
}

// ===================  Destructor  =====================
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// ===================  Copy constructor  =====================
Fixed::Fixed(const Fixed& ref) {
	std::cout << "Copy constructor called" << std::endl;
	value = ref.getRawBits();
}

// ===================  Operators  =====================
Fixed& Fixed::operator=(const Fixed& ref) {
	std::cout << "Assignation operator called" << std::endl;
	value = ref.getRawBits();
	return *this;
}

// ===================  Member Functions  =====================
int Fixed::getRawBits(void) const {
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

int Fixed::toInt(void) const {
	return (value >> frac_bits);
}

float Fixed::toFloat(void) const {
	return (value / (float)(1 << frac_bits));
}

// ===================  Out-of-class operator  =====================
std::ostream& operator<<(std::ostream& out, const Fixed& f) {
	out << f.toFloat();
	return out;
}
