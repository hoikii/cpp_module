/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:51:57 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/18 08:21:35 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

struct Data {
	std::string name;
	int age;
  public:
	Data(std::string name, int age) : name(name), age(age) {}
};


#ifndef TEST
uintptr_t serialize(Data* ptr) {
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data* deserialize(uintptr_t raw) {
	Data* ret = reinterpret_cast<Data*>(raw);
	return ret;
}

#else
uintptr_t serialize(Data* ptr) {
	int size = ptr->name.length() + 1 + sizeof(ptr->age);
	char* rawdata = new char[size]();

	unsigned int i = -1;
	while (++i < ptr->name.length())
		rawdata[i] = ptr->name[i];
	rawdata[i] = 0;

	*reinterpret_cast<int*>(rawdata + i + 1) = ptr->age;
	// same as *(int *)(rawdata + i + 1) = ptr->age;

	return reinterpret_cast<uintptr_t>(rawdata);
}

Data* deserialize(uintptr_t raw) {
	Data *ret = new Data("", 0);
	char* rawdata = reinterpret_cast<char*>(raw);

	int i = 0;
	while (rawdata[i] != '\0')
		i++;
	ret->name = std::string(rawdata, i);

	ret->age = *reinterpret_cast<int*>(rawdata + i + 1);

	return ret;
}
#endif


int main() {
	Data* d1 = new Data("marvin", 42);
	Data* d2;
	std::cout << "address of source : " << d1 << "\n";
	std::cout << "name: " << d1->name << "\tage: " << d1->age << "\n\n";
	

	uintptr_t tmp = serialize(d1);
	d2 = deserialize(tmp);
	std::cout << "address of rawdata: 0x" << std::hex << tmp << std::dec << "\n\n";


	std::cout << "address of dest   : " << d2 << "\n";
	std::cout << "name: " << d2->name << "\tage: " << d2->age << "\n" << std::endl;


	delete d1;
#ifdef TEST
	delete[] (char*)tmp;
	delete d2;
#endif
	return 0;
}
