/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:08:25 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/19 02:07:37 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "iter.hpp"

template <typename T>
void prn(const T& item) {
	std::cout << item << " ";
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	iter(arr, 5, prn);
	std::cout << "\n";

	const char *s = "this is sample text.";
	iter(s, strlen(s), prn);
	std::cout << "\n";

	return 0;
}
