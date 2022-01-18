/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:05:27 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/18 22:21:13 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T>
void swap(T& a, T& b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T& min(T& a, T& b) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T& max(T& a, T& b) {
	if (a > b)
		return a;
	return b;
}

#endif
