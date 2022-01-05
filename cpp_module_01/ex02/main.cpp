/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:24:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 00:46:27 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::endl;

int main() {
	std::string str = "HI THIS IS BRAIN";
	cout << "str = " << str << "\n" << endl;

	std::string *stringPTR = &str;	// pointer to str
	std::string &stringREF = str;	// reference to str

	cout << "address of str            : " << &str << endl;
	cout << "address of str (using ptr): " << stringPTR << endl;
	cout << "address of str (using ref): " << &stringREF << "\n"<< endl;

	cout << "print using ptr : " << *stringPTR << endl;
	cout << "print using ref : " << stringREF << endl;

	return 0;
}
