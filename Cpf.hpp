#pragma once
#include <string>

class Cpf
{
private:
	std::string number;
public:
	Cpf(std::string number);
	std::string getNumber();
};

