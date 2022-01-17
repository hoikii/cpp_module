/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:59:05 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/17 15:57:34 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

enum e_input_type {
	INPUT_CHAR,
	INPUT_INT,
	INPUT_FLOAT,
	INPUT_DOUBLE,
	INPUT_INVALID
};

class Converter {
	private:
		int input_type;

		char in_char;
		int in_int;
		float in_float;
		double in_double;

		void prn_from_char(const char in_char) const;
		void prn_from_int(const int in_int) const;
		void prn_from_float(const float in_float) const;
		void prn_from_double(const double in_double) const;
		
	public:
		Converter(const std::string&);
		~Converter();
		Converter(const Converter& ref);
		Converter& operator=(const Converter& rhs);

		void prn() const;
};

#endif












