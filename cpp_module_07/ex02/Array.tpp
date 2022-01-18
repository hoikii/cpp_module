/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:36:43 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/18 23:30:33 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# ifndef ARRAY_HPP
#  error __FILE__ should only be included from Array.hpp
# endif

template <class T>
Array<T>::Array() {
	arr = NULL;
	_size = 0;
}

template <class T>
Array<T>::Array(unsigned int n) {
	arr = new T[n];
	_size = n;
}

template <class T>
Array<T>::~Array() {
	delete[] arr;
}

template <class T>
Array<T>::Array(const Array& ref) {
	arr = NULL;
	if (ref._size > 0)
		arr = new T[ref._size];
	for (size_t i = 0; i < ref._size; i++)
		arr[i] = ref[i];
	_size = ref._size;
}

template <class T>
Array<T>& Array<T>::operator=(const Array& rhs) {
	T* tmp = NULL;
	if (rhs._size > 0)
		tmp = new T[rhs._size];
	for (size_t i = 0; i < rhs._size; i++)
		tmp[i] = rhs[i];
	delete[] arr;
	arr = tmp;
	_size = rhs._size;
	return *this;
}

template <class T>
T& Array<T>::operator[](size_t idx) const {
	if (idx >= _size)
		throw std::out_of_range("ArrayException: index out of range");
	return arr[idx];
}

template <class T>
unsigned int Array<T>::size() const {
	return _size;
}

#endif
