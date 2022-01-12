/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:56:58 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/12 18:36:28 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define MAX_IDEAS 100

class Brain {
	private:
		std::string *ideas;
		int cnt;

	public:
		Brain();
		~Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& rhs);

		void pushIdea(std::string s);
		std::string popIdea();
		void prnIdeas() const;
};

#endif
