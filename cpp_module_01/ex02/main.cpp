/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:24:29 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 10:30:21 by kanlee           ###   ########.fr       */
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

	cout << "address of str            : " << &str << endl;
	cout << "address of str (using ptr): " << stringPTR << endl;
	cout << "address of str (using ref): " << &stringREF << endl << endl;

	cout << "print using ptr : " << *stringPTR << endl;
	cout << "print using ref : " << stringREF << endl;

#if 0
	int n = 1;
	int *ptr = &n;
	int &ref = n;

	cout << "\n\n  n = " << n << endl;
	cout << "ptr = " << *ptr << endl;
	cout << "ref = " << ref << endl;

	cout << "\nchange n to 21" << endl;
	n = 21;
	cout << "  n = " << n << endl;
	cout << "ptr = " << *ptr << endl;
	cout << "ref = " << ref << endl;

	cout << "\nchange *ptr to 42" << endl;
	*ptr = 42;
	cout << "  n = " << n << endl;
	cout << "ptr = " << *ptr << endl;
	cout << "ref = " << ref << endl;

	cout << "\nchange ref to 4242" << endl;
	ref = 4242;
	cout << "  n = " << n << endl;
	cout << "ptr = " << *ptr << endl;
	cout << "ref = " << ref << endl;
#endif
	return 0;
}
