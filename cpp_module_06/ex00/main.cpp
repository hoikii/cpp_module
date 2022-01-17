/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:00:10 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/17 16:43:39 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Converter.hpp"

int main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "no input" << std::endl;
		return 0;
	}

	Converter cv(av[1]);

	cv.prn();

	return 0;
}

