/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:58:53 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/17 16:09:02 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <limits>
#include <cerrno>
#include <iomanip>
#include "Converter.hpp"

Converter::Converter(const std::string& str) {
	input_type = INPUT_INVALID;

	char* endptr;

	errno = 0;
	in_double = strtod(str.c_str(), &endptr);
	if (errno == ERANGE)
		input_type = INPUT_INVALID;
	else if (*endptr == '\0')
		input_type = INPUT_DOUBLE;
	else if (*endptr == 'f' && *(endptr + 1) == '\0') {
		in_float = strtof(str.c_str(), NULL);
		if (errno != ERANGE)
			input_type = INPUT_FLOAT;
	}

	errno = 0;
	in_int = strtol(str.c_str(), &endptr, 10);
	if (errno != ERANGE && *endptr == '\0'
		&& in_int <= std::numeric_limits<int>::max()
		&& in_int >= std::numeric_limits<int>::min())
		input_type = INPUT_INT;

	if (str.length() == 1 && !isdigit(str[0])) {
		input_type = INPUT_CHAR;
		in_char = str[0];
	}
}

Converter::~Converter() {}

Converter::Converter(const Converter& ref) {
	input_type = ref.input_type;
	in_char = ref.in_char;
	in_int = ref.in_int;
	in_float = ref.in_float;
	in_double = ref.in_double;
}

Converter& Converter::operator=(const Converter& rhs) {
	input_type = rhs.input_type;
	in_char = rhs.in_char;
	in_int = rhs.in_int;
	in_float = rhs.in_float;
	in_double = rhs.in_double;
	return *this;
}




void Converter::prn() const {
	std::cout.precision(1);
	std::cout << std::fixed;
	if (input_type == INPUT_CHAR)
		prn_from_char(in_char);
	else if (input_type == INPUT_INT)
		prn_from_int(in_int);
	else if (input_type == INPUT_FLOAT)
		prn_from_float(in_float);
	else if (input_type == INPUT_DOUBLE)
		prn_from_double(in_double);
	else
		std::cout << "invalid input\n";
}

void Converter::prn_from_char(const char num) const {
	std::cout << "input is char\n";
	std::cout << "---------------\n";

	// input is char
	if (isprint(num))
		std::cout << "char: '" << num << "'\n";
	else
		std::cout << "char: Non displayable\n";		

	// promotion to int
	std::cout << "int: " << static_cast<int>(num) << "\n";

	// promotion to float
	std::cout << "float: " << static_cast<float>(num) << "f\n";

	// promotion to double
	std::cout << "double: " << static_cast<double>(num) << std::endl;;
}

void Converter::prn_from_int(const int num) const {
	std::cout << "input is int\n";
	std::cout << "---------------\n";

	// static_cast to char
	if (num > std::numeric_limits<char>::max() || num < std::numeric_limits<char>::min())
		std::cout << "char: impossible\n";
	else {
		char ch = static_cast<char>(num);
		if (isprint(ch))
			std::cout << "char: '" << ch << "'\n";
		else
			std::cout << "char: Non displayable\n";		
	}

	// input is int
	std::cout << "int: " << num << "\n";

	// promotion to float
	std::cout << "float: " << static_cast<float>(num) << "f\n";

	// promotion to double
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void Converter::prn_from_float(const float num) const {
	std::cout << "input is float\n";
	std::cout << "---------------\n";

	// static_cast to char
	if (isnan(num) || isinf(num)
		|| truncf(num) > std::numeric_limits<char>::max()
		|| truncf(num) < std::numeric_limits<char>::min())
		std::cout << "char: impossible\n";
	else {
		char ch = static_cast<char>(num);
		if (isprint(ch))
			std::cout << "char: '" << ch << "'\n";
		else
			std::cout << "char: Non displayable\n";		
	}

	// static_cast to int
	if (isnan(num) || isinf(num)
		|| truncf(num) > std::numeric_limits<int>::max()
		|| truncf(num) < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(num) << "\n";

	// input is float
	std::cout << "float: " << num << "f\n";

	// promotion to double
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void Converter::prn_from_double(const double num) const {
	std::cout << "input is double\n";
	std::cout << "---------------\n";

	// static_cast to char
	if (isnan(num) || isinf(num)
		|| trunc(num) > std::numeric_limits<char>::max()
		|| trunc(num) < std::numeric_limits<char>::min())
		std::cout << "char: impossible\n";
	else {
		char ch = static_cast<char>(num);
		if (isprint(ch))
			std::cout << "char: '" << ch << "'\n";
		else
			std::cout << "char: Non displayable\n";		
	}

	// static_cast to int
	if (isnan(num) || isinf(num)
		|| trunc(num) > std::numeric_limits<int>::max()
		|| trunc(num) < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(num) << "\n";

	// static_cast to float
	if (!isinf(num) && (num > std::numeric_limits<float>::max()
		|| num < -1 * std::numeric_limits<float>::max()))
		std::cout << "float: impossible\n";
	else
		std::cout << "float: " << static_cast<float>(num) << "f\n";

	// input is double
	std::cout << "double: " << num << std::endl;
}

