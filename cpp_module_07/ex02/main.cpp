/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:17:39 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/22 14:38:41 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	// 클래스 초기화
	Array<int> arr(10);
	Array<int> arr_empty;

	// size() 멤버함수
	std::cout << "size of arr = " << arr.size() << "\n";
	std::cout << "sizeof arr_empty = " << arr_empty.size() << "\n";


	for (int i = 0; i < 10; i++)
		arr[i] = i;
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n\n";

	// index-out-of-range
	try {
		arr[10] = 3;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		arr[-1] = 3;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n";

	// 복사생성자
	Array<int> ctor(arr);
	for (int i = 0; i < 10; i++)
		arr[i] = 999;
	for (int i = 0; i < 10; i++)
		std::cout << ctor[i] << " ";
	std::cout << "\n\n";


	// 대입연산자
	Array<int> assign;
	assign = ctor;
	for (int i = 0; i < 10; i++)
		ctor[i] = 999;
	for (int i = 0; i < 10; i++)
		std::cout << assign[i] << " ";
	std::cout << "\n\n";

	// 자기대입
	assign = *&assign;
	for (int i = 0; i < 10; i++)
		std::cout << assign[i] << " ";
	std::cout << "\n\n";


	return 0;
}
