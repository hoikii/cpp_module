/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanC.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 00:59:07 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/05 03:18:51 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANC_HPP
# define HUMANC_HPP

# include "Weapon.hpp"

class HumanC {
	private:
		std::string name;
		Weapon weapon;

	public:
		HumanC(std::string name, Weapon w);
		void attack();
};

#endif
