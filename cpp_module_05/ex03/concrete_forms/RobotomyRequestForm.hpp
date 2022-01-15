/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 02:54:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/15 13:23:39 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "../Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string target;

	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& ref);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
		
		virtual void execute(const Bureaucrat& executor) const;
};

#endif
