#include "SLibrary.h"
#include <iostream>
namespace SLibrary
{
	void Greeter::greet(std::string name)
	{
		std::cout << "Введите имя: ";
		std::cin >> name;
		std::cout << "Здравствуйте, " << name << "!" << std::endl;
	}
}
