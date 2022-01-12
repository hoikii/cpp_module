/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 23:04:36 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* brain_p;

	public:
		Dog();
		~Dog();
		Dog(const Dog& src);
		Dog& operator=(const Dog& rhs);

		virtual void makeSound(void) const;

		void pushIdea(std::string s) const;
		std::string popIdea() const;
		std::string prnIdeas() const;
};

#endif /* ************************************************************* DOG_H */
