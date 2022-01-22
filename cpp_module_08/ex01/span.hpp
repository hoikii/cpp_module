/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:08:12 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/21 20:44:01 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span {
	private:
		unsigned int max_size;
		std::vector<int> v;



	public:
		Span(unsigned int size);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& rhs);

		unsigned int getSize() const;

		void addNumber(const int n);

		template <typename T>
		void addNumber(T begin, T end) {
			if (max_size - v.size() < (size_t)std::distance(begin, end))
				throw SetIsFullException();
			for (T it = begin; it != end; ++it)
				v.push_back(*it);
		};

		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		class SetIsFullException : public std::exception {
			virtual const char* what() const throw();
		};
		class NoSpanToFindException : public std::exception {
			virtual const char* what() const throw();
		};
};

#endif




