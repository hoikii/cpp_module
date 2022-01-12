/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 18:44:00 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Constructor called" << std::endl;
	ideas = new std::string[MAX_IDEAS];
	cnt = 0;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
	delete[] ideas;
}

Brain::Brain(const Brain& src) {
	std::cout << "Brain Copy Ctor called" << std::endl;
	ideas = new std::string[MAX_IDEAS];
	for (int i = 0; i < MAX_IDEAS; i++)
		ideas[i] = src.ideas[i];
	cnt = src.cnt;
}

Brain& Brain::operator=(const Brain& rhs) {
	std::cout << "Brain Assign op called" << std::endl;
	std::string *bak = ideas;
	ideas = new std::string[MAX_IDEAS];
	for (int i = 0; i < MAX_IDEAS; i++)
		ideas[i] = rhs.ideas[i];
	delete[] bak;
	cnt = rhs.cnt;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Brain::pushIdea(std::string s) {
	if (cnt < MAX_IDEAS)
		ideas[cnt++] = s;
}

std::string Brain::popIdea() {
	if (cnt > 0)
		return ideas[--cnt];
	return std::string();
}

void Brain::prnIdeas() const {
	for (int i = 0; i < cnt; i++)
		std::cout << i << ":" << ideas[i] << "  ";
}
