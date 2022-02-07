/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 04:00:02 by kanlee            #+#    #+#             */
/*   Updated: 2022/02/07 18:37:26 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stack>

/* std::map takes not int but pair, so it doesn't match subjects's need.
 * Passing map as argument will make compile error.
 * if find failed, return last iter like std::find does.
*/
template <typename T>
typename T::iterator easyfind(T& t, int n) {
#if 1
	return std::find(t.begin(), t.end(), n);
#else
	typename T::iterator iter = t.begin();

	while (iter != t.end()) {
		if (*iter == n)
			return iter;
		iter++;
	}
	return iter;
#endif
}

/**
 * Find in stack doesn't make sense, and std::stack even doesn't have iterator.
 * If we really need to do this, overload it to return unsigned int instead.
 * @return how many pop() is needed to pop n, or 0 if find failed.
*/
size_t easyfind(std::stack<int>& t, int n) {
	std::stack<int> tmp;
	size_t cnt = 0;

	while (!t.empty()) {
		if (t.top() == n)
			break;
		tmp.push(t.top());
		t.pop();
		++cnt;
	}
	while (!tmp.empty()) {
		t.push(tmp.top());
		tmp.pop();
	}
	if (cnt == t.size())
		return 0;
	return cnt + 1;
}

#endif
