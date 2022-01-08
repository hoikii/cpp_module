/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:07:31 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/07 23:21:04 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		static const int frac_bits;
		int value;

	public:
		Fixed();
		Fixed(int);
		Fixed(float);
		~Fixed();
		Fixed(const Fixed& ref);
		Fixed& operator=(const Fixed& ref);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
};		

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif
