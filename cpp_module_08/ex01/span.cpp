/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:09:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/21 20:24:06 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <climits>
#include "span.hpp"
#include <iostream>

static unsigned int udiff(int a, int b) {
	if (a > b)
		return ((unsigned int)a - (unsigned int)b);
	else
		return ((unsigned int)b - (unsigned int)a);
}

Span::Span(unsigned int size) : max_size(size) {
	this->v.reserve(size);
}

Span::~Span() {}

Span::Span(const Span& other) {
	this->max_size = other.max_size;
	this->v = other.v;
}

Span& Span::operator=(const Span& rhs) {
	this->max_size = rhs.max_size;
	this->v = rhs.v;
	return *this;
}

unsigned int Span::getSize() const {
	return v.size();
}

void Span::addNumber(const int n) {
	if (v.size() == this->max_size)
		throw Span::SetIsFullException();
	v.push_back(n);
}

unsigned int Span::shortestSpan(void) {
	if (v.size() < 2)
		throw NoSpanToFindException();

	unsigned int ret = UINT_MAX;;
	for (size_t i = 1; i < v.size(); ++i)
		ret = std::min(ret, udiff(v[i], v[i - 1]));
	return ret;
}

unsigned int Span::longestSpan(void) {
	if (v.size() < 2)
		throw NoSpanToFindException();

	unsigned int ret = 0;;
	for (size_t i = 1; i < v.size(); ++i)
		ret = std::max(ret, udiff(v[i], v[i - 1]));
	return ret;
}

const char* Span::SetIsFullException::what() const throw() {
	return "Span: SetIsFullException";
}

const char* Span::NoSpanToFindException::what() const throw() {
	return "Span: NoSpanToFindException";
}
