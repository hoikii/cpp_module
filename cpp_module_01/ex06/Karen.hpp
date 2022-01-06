/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:13:53 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/06 22:56:35 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

# define MAX_LVL 4

enum {
	DEBUG = 0,
	INFO,
	WARNING,
	ERROR
};

class Karen {
	private:
		static std::string level_str[MAX_LVL];
		static void (Karen::*f[MAX_LVL])(void);

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:

		void complain(std::string level);
};

#endif
