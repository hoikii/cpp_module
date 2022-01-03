/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:01:19 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/03 01:53:04 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include <cstring>
#include <cstdlib>

using std::endl;

/* convert each **argv to wide char
 * to support multibyte characters like öõóó or αβγδε.
*/
void prn_upper(const char *str)
{
	wchar_t wch;

	int len = std::strlen(str);
	while (1)
	{
		int ret = std::mbtowc(&wch, str, len);
		if (ret <= 0)
			break ;
		std::wcout << (wchar_t)towupper(wch);
		str += ret;
		len -= ret;
	}
}

int main(int ac, char **av)
{
#ifdef MACOS
	setlocale(LC_ALL, "en_US.UTF-8");
	std::wcout.imbue(std::locale("en_US.UTF-8"));
#else
	std::setlocale(LC_ALL, "en_US.utf8");
#endif
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	while (*(++av))
		prn_upper(*av);
	std::wcout << endl;
	return 0;
}
