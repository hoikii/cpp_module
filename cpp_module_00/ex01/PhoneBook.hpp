/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 02:37:43 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/03 14:29:05 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook {
	private:
		int size;
		int start_idx;
		Contact contacts[MAX_CONTACTS];

		std::string in_criteria(std::string);
		int in_num();
		void show_header();
		void show_list();
	
	public:
		PhoneBook();

		void add();
		void search();
};

#endif
