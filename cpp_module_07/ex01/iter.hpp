/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:09:35 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/18 22:21:37 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T* arr, size_t len, void (*fp)(const T& arg)) {
	for (size_t i = 0; i < len; i++)
		fp(arr[i]);
}

#endif
