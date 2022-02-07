/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:09:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/02/07 18:39:00 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <climits>
#include "span.hpp"

Span::Span(unsigned int size) : max_size(size) {
	this->v.reserve(size);
}

Span::~Span() {
	this->v.clear();
}

Span::Span(const Span& other) {
	this->max_size = other.max_size;
	this->v.clear();
	this->v = other.v;
}

Span& Span::operator=(const Span& rhs) {
	this->max_size = rhs.max_size;
	this->v.clear();
	this->v = rhs.v;
	return *this;
}

unsigned int Span::diffabs(int a, int b) const {
	if (a > b)
		return (static_cast<unsigned int>(a) - static_cast<unsigned int>(b));
	else
		return (static_cast<unsigned int>(b) - static_cast<unsigned int>(a));
}

unsigned int Span::getSize() const {
	return v.size();
}

void Span::addNumber(const int n) {
	if (v.size() == this->max_size)
		throw Span::SetIsFullException();
	v.push_back(n);
}

unsigned int Span::shortestSpan(void) const {
	if (v.size() < 2)
		throw NoSpanToFindException();

	unsigned int ret = UINT_MAX;;
	for (size_t i = 1; i < v.size(); ++i)
		ret = std::min(ret, diffabs(v[i], v[i - 1]));
	return ret;
}

unsigned int Span::longestSpan(void) const {
	if (v.size() < 2)
		throw NoSpanToFindException();

	unsigned int ret = 0;;
	for (size_t i = 1; i < v.size(); ++i)
		ret = std::max(ret, diffabs(v[i], v[i - 1]));
	return ret;
}

void Span::prn(void) const {
	std::vector<int>::const_iterator it;

	for (it = v.begin(); it != v.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

const char* Span::SetIsFullException::what() const throw() {
	return "Span: SetIsFullException";
}

const char* Span::NoSpanToFindException::what() const throw() {
	return "Span: NoSpanToFindException";
}
