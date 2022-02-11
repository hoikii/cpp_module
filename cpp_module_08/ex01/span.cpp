/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:09:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/02/11 13:47:18 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <numeric>
#include <cmath>
#include "span.hpp"
#include <iostream>

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

unsigned int Span::getSize() const {
	return v.size();
}

void Span::addNumber(const int n) {
	if (v.size() == this->max_size)
		throw Span::SetIsFullException();
	v.push_back(n);
}

unsigned int Span::longestSpan(void) const {
	if (v.size() < 2)
		throw NoSpanToFindException();

	unsigned int min = *std::min_element(v.begin(), v.end());
	unsigned int max = *std::max_element(v.begin(), v.end());
	return (max - min);
}

unsigned int Span::shortestSpan(void) const {
	if (v.size() < 2)
		throw NoSpanToFindException();

	std::vector<int> copy(v);
	std::sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), copy.begin());
	for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); ++it)
		*it = std::abs(*it);
	return (*std::min_element(copy.begin() + 1, copy.end()));
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
