/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:26:18 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/04 02:06:43 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
	private:
		std::string name;
	
	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
