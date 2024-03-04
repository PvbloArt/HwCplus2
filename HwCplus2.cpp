#include <iostream>
#include <string>

int main() {
	std::string message = "Hello skillbox)))!That Pvlblo //pls help";

	std::cout << message << std::endl;
	std::cout << "line length: " << message.length() << std::endl;
	std::cout << "first symbol: " << message.front() << std::endl;
	std::cout << "last symbol: " << message.back() << std::endl;

	return 0;
}