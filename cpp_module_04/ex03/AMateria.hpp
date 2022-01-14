/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:11:55 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/14 15:17:17 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria {
	protected:
		std::string type;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria& ref);
		AMateria& operator=(const AMateria& rhs);
		
		std::string const & getType() const; //Returns the materia type
			
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
