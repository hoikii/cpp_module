/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:11:41 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/08 15:02:13 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

// ===================  Constructors  =====================
Fixed::Fixed() {
	value = 0;
}

Fixed::Fixed(int n) {
	value = (n << frac_bits);
}

Fixed::Fixed(float f) {
	value = roundf(f * (1 << frac_bits));
}

// ===================  Destructor  =====================
Fixed::~Fixed() {
}

// ===================  Copy constructor  =====================
Fixed::Fixed(const Fixed& ref) {
	value = ref.getRawBits();
}

// ===================  Operators - Assign =====================
Fixed& Fixed::operator=(const Fixed& ref) {
	value = ref.getRawBits();
	return *this;
}

Fixed& Fixed::operator=(const int& ref) {
	*this = Fixed(ref);
	return *this;
}

Fixed& Fixed::operator=(const float& ref) {
	*this = Fixed(ref);
	return *this;
}

// ===================  Operators - Comparison =====================
bool Fixed::operator>(const Fixed& operand) const {
	return (this->toFloat() > operand.toFloat());
}

bool Fixed::operator<(const Fixed& operand) const {
	return (this->toFloat() < operand.toFloat());
}

bool Fixed::operator>=(const Fixed& operand) const {
	return (this->toFloat() >= operand.toFloat());
}

bool Fixed::operator<=(const Fixed& operand) const {
	return (this->toFloat() <= operand.toFloat());
}

bool Fixed::operator!=(const Fixed& operand) const {
	return (this->toFloat() != operand.toFloat());
}

bool Fixed::operator==(const Fixed& operand) const {
	return (this->toFloat() == operand.toFloat());
}

// ===================  Operators - Arithmetic =====================
Fixed Fixed::operator+(const Fixed& operand) const {
	Fixed tmp(this->toFloat() + operand.toFloat());
	return tmp;
}

Fixed Fixed::operator-(const Fixed& operand) const {
	Fixed tmp(this->toFloat() - operand.toFloat());
	return tmp;
}

Fixed Fixed::operator*(const Fixed& operand) const {
	Fixed tmp(this->toFloat() * operand.toFloat());
	return tmp;
}

Fixed Fixed::operator/(const Fixed& operand) const {
	Fixed tmp(this->toFloat() / operand.toFloat());
	return tmp;
}

// ===================  Operators - pre/post-inc/decrement =====================
Fixed& Fixed::operator++() {
	// *this = *this + Fixed(1);
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	//*this = *this + Fixed(1);
	this->value++;
	return tmp;
}

Fixed& Fixed::operator--() {
	//*this = *this - Fixed(1);
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	// *this = *this - Fixed(1);
	this->value--;
	return tmp;
}

// =================== Static Member Functions =====================
Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	return b;
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
