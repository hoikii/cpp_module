/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 02:53:31 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 13:21:11 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "../Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string target;

	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& ref);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

		virtual void execute(const Bureaucrat& executor) const;
};

#endif
