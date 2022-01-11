/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:50:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/11 16:55:29 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	protected:
		std::string type;

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal&	operator=( WrongAnimal const & rhs );

		std::string getType(void) const;
		void makeSound(void);
};

#endif /* ***************************************************** WRONGANIMAL_H */