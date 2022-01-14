/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:02:28 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 01:37:07 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <ostream>

class Bureaucrat;

# include "Form.hpp"

class Bureaucrat {
	private:
		std::string const name;
		int grade;

	public:
		Bureaucrat(std::string, int);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& ref);
		Bureaucrat& operator=(const Bureaucrat& rhs);

		std::string getName() const;
		int getGrade() const;

		void increaseGrade();
		void decreaseGrade();
		void signForm(Form& form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& ref);

#endif
