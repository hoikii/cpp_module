/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:07:31 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/07 18:36:27 by kanlee           ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed& ref);
		Fixed& operator=(const Fixed& ref);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};		

#endif
