/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:59:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/21 21:38:00 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# ifndef MUTANTSTACK_HPP
#  error __file should only be included from mutantstack.hpp
# endif

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other) {
	this->c = other.c;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& rhs) {
	this->c = rhs.c;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::rbegin(void) {
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::rend(void) {
	return this->c.rend();
}

#endif
