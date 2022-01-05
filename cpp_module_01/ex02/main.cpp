/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:24:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 18:45:39 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::endl;

int main() {
	std::string str = "HI THIS IS BRAIN";
	cout << "str = " << str << endl << endl;

	std::string *stringPTR = &str;	// pointer to str
	std::string &stringREF = str;	// reference to str
	// 참조변수는 선언과 동시에 초기화되어야 함 (T* const ptr처럼)

	cout << "address of str            : " << &str << endl;
	cout << "address of str (using ptr): " << stringPTR << endl;
	cout << "address of str (using ref): " << &stringREF << endl << endl;

	cout << "print using ptr : " << *stringPTR << endl;
	cout << "print using ref : " << stringREF << endl << endl;

#if 0
	str.append(" MODDED");
	cout << "(append to str) str : " << str << endl;
	cout << "(append to str) ptr : " << *stringPTR << endl;
	cout << "(append to str) ref : " << stringREF << endl << endl;

	(*stringPTR).append(" PTR");
	cout << "(append to ptr) str : " << str << endl;
	cout << "(append to ptr) ptr : " << *stringPTR << endl;
	cout << "(append to ptr) ref : " << stringREF << endl << endl;

	stringREF.append(" REF");
	cout << "(append to ref) str : " << str << endl;
	cout << "(append to ref) ptr : " << *stringPTR << endl;
	cout << "(append to ref) ref : " << stringREF << endl << endl;

	std::string another_str ="THIS IS ANOTHER BRAIN";
	stringPTR = &another_str;
	cout << "(ptr refers another string) ptr : "<< *stringPTR << endl << endl;
	// &stringREF = another_str;	// Compile error: reference cannot be reassigned.
	stringREF = another_str;
	cout << "(changed by ref) str: " << str << endl;
	cout << "(changed by ref) ref: " << stringREF << endl;
#endif
	return 0;
}
