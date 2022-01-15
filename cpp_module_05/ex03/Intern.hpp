/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:33:34 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 16:50:52 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern {
	private:
		static const std::string forms[6];
		static Form* (Intern::*f[3])(const std::string);
		std::string toLower(const std::string);

	public:
		Intern();
		~Intern();
		Intern(const Intern& ref);
		Intern& operator=(const Intern& rhs);

		Form* makeSCform(const std::string target);
		Form* makeRRform(const std::string target);
		Form* makePPform(const std::string target);
		Form* makeForm(const std::string name, const std::string target);
		
		class InternMakeFormException : public std::exception {
			virtual const char* what() const throw();
		};
};

#endif
