/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:07:31 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/08 01:47:08 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		static const int frac_bits;
		int value;

	public:
		// Constructor
		Fixed();
		Fixed(int);
		Fixed(float);

		// Destructor
		~Fixed();

		// Copy constructor
		Fixed(const Fixed& ref);

		// assign operator
		Fixed& operator=(const Fixed& ref);

		// comparison ops
		bool operator>(const Fixed& operand) const;
		bool operator<(const Fixed& operand) const;
		bool operator>=(const Fixed& operand) const;
		bool operator<=(const Fixed& operand) const;
		bool operator!=(const Fixed& operand) const;
		bool operator==(const Fixed& operand) const;

		// arithmetic ops
		Fixed operator+(const Fixed& operand);
		Fixed operator-(const Fixed& operand);
		Fixed operator*(const Fixed& operand);
		Fixed operator/(const Fixed& operand);

		// pre/post increment/decrement ops
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		// s
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed &a, const Fixed &b);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
};		

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif
