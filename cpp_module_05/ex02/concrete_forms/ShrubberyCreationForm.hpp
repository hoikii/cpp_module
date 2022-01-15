/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 02:52:55 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 13:45:35 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "../Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string target;
		void prnAsciiTree(std::string target) const;

	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& ref);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
		
		virtual void execute(const Bureaucrat& executor) const;
};

#endif

