#include "SLibrary.h"
#include <iostream>
namespace SLibrary
{
	void Greeter::greet(std::string name)
	{
		std::cout << "������� ���: ";
		std::cin >> name;
		std::cout << "������������, " << name << "!" << std::endl;
	}
}
