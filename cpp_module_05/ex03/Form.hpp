/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:13:39 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 13:20:43 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <ostream>

class Form;

# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int exeGrade;

	public:
		Form(std::string, int, int);
		virtual ~Form();
		Form(const Form& ref);
		Form& operator=(const Form& rhs);

		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;

		void beSigned(const Bureaucrat& who);
		void chkExecutable(const Bureaucrat& executor) const;
		virtual void execute(const Bureaucrat& executor) const = 0;

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, Form& ref);

#endif
