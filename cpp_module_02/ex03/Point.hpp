/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:50:40 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/08 15:52:10 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <ostream>
# include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y;

	public:
		// Constructor
		Point();
		Point(const Fixed a, const Fixed b);

		// Destructor
		~Point();

		// Copy Constructor
		Point(const Point& ref);

		// Operator
		Point& operator=(const Point& ref);
		Point operator-(const Point& ref) const;

		Fixed getx(void) const;
		Fixed gety(void) const;
};

std::ostream& operator<<(std::ostream& out, const Point& p);

#endif
