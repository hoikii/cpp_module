/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:47:49 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/21 21:37:27 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void);
		iterator end(void);
		iterator rbegin(void);
		iterator rend(void);
};

# include "mutantstack.tpp"

#endif

