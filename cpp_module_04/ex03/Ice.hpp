/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:02:50 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/14 04:12:58 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		~Ice();
		Ice(const Ice& ref);
		Ice& operator=(const Ice& rhs);

		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif