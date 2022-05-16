/*
 * main.cc
 *
 *  Created on: 16 мая 2022 г.
 *      Author: unyuu
 */

#include <iostream>
#include <string>

int main(int, char **)
{
	std::cout << "Это тестовый проект!" << std::endl;
	std::string name;
	std::cout << "Как Вас зовут? ";
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";

	return 0;
}


