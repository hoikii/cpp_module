/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:02:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/14 17:50:10 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		~Cure();
		Cure(const Cure& ref);
		Cure& operator=(const Cure& rhs);

		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif
