/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 23:03:45 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* brain_p;

	public:
		Cat();
		~Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& rhs);

		virtual void makeSound(void) const;

		void pushIdea(std::string s) const;
		std::string popIdea() const;
		std::string prnIdeas() const;

};

#endif /* ************************************************************* CAT_H */
