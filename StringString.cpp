#include <iostream>
#include <string>
int main()
{
	std::string myString = "Hello Skillbox";

	std::cout << "Строковая переменная: " << myString << std::endl;

	std::cout << "Длина строки:" << myString.length() << std::endl;

	std::cout << "Первый символ:" << myString[0] << std::endl;

	std::cout << "Последний символ:" << myString[myString.length() - 1] << std::endl;


	return 0;
}
