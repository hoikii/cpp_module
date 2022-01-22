/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:22:45 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/21 01:04:42 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <deque>
#include <stack>
#include <algorithm>
#include <cassert>
#include "easyfind.hpp"

int main() {
	int arr[] = { 4,3,2,5,1 };
	std::vector<int> v(arr, arr + 5);
	std::set<int> s(arr, arr + 5);
	std::list<int> l(arr, arr + 5);
	std::deque<int> d(arr, arr + 5);

	// test find in vector
	assert(easyfind(v, 3) == find(v.begin(), v.end(), 3));

	// test find in vector - not found
	assert(easyfind(v, 9) == find(v.begin(), v.end(), 9));

	// test find in set	
	assert(easyfind(s, 2) == find(s.begin(), s.end(), 2));

	// test find in list
	assert(easyfind(l, 5) == find(l.begin(), l.end(), 5));

	// test find in deque
	assert(easyfind(d, 4) == find(d.begin(), d.end(), 4));

	// test find in stack
	std::stack<int> st;
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(5);
	st.push(1);

	assert(easyfind(st, 4) == 5);
	assert(easyfind(st, 3) == 4);
	assert(easyfind(st, 2) == 3);
	assert(easyfind(st, 5) == 2);
	assert(easyfind(st, 1) == 1);
	assert(easyfind(st, 9) == 0);

	std::cout << "test done without failure." << std::endl;
	return 0;
}
