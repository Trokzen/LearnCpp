#include <iostream>

int main()
{
	int x = 5, y = 5;
	std::cout << x << " " << y << std::endl;
	std::cout << ++x << " " << --y << std::endl; // версия префикс
	std::cout << x << " " << y << std::endl;
	std::cout << x++ << " " << y-- << std::endl; // версия постфикс
	std::cout << x << " " << y << std::endl;

	return 0;
}