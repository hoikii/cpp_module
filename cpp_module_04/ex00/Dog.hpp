/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 01:25:27 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog& src);
		Dog& operator=(const Dog& rhs);

		void makeSound(void);
};

#endif /* ************************************************************* DOG_H */
