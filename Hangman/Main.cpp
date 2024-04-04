#include <iostream>
#include <map>

int main() {
	
	std::map<std::string, unsigned long> phonebook;

	phonebook["Ola halvorsen"] = 94824467;
	phonebook["kil halvorsen"] = 94828461;
	phonebook["hans halvorsen"] = 89814467;
	phonebook["ulea halvorsen"] = 94019484;

	std::cout << phonebook["hans halvorsen"] << std::endl;


	return 0;
}
