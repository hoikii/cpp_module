/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:08:12 by kanlee            #+#    #+#             */
/*   Updated: 2022/02/07 16:32:39 by kanlee           ###   ########.fr       */
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

		unsigned int diffabs(int a, int b) const;

	public:
		Span(unsigned int size);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& rhs);

		unsigned int getSize() const;
		void addNumber(const int n);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void prn(void) const;

		template <typename T>
		void addNumber(T begin, T end) {
			if (max_size - v.size() < (size_t)std::distance(begin, end))
				throw SetIsFullException();
			v.insert(v.end(), begin, end);
		};

		class SetIsFullException : public std::exception {
			virtual const char* what() const throw();
		};
		class NoSpanToFindException : public std::exception {
			virtual const char* what() const throw();
		};

};

#endif
