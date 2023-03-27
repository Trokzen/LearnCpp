#include <iostream>

int main()
{
	int x = 5, y = 5, z=5;
	std::cout << x << " " << y << std::endl;//example coment
	std::cout << ++x << " " << --y << std::endl;
	std::cout << x << " " << y << std::endl;
	std::cout << x++ << " " << y-- << std::endl;
	std::cout << x << " " << y << std::endl;  
	z = 25;//bug fixed new and change line 
	return 0; 
}
