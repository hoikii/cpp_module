/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:13:44 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/19 00:10:53 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {
	private:
		T* arr;
		size_t _size;

	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array& ref);
		Array& operator=(const Array& rhs);
		T& operator[](size_t idx) const;

		unsigned int size(void) const;
};

# include "Array.tpp"

#endif
