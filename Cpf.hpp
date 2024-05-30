#pragma once
#include <string>

class Cpf
{
private:
	std::string number;
public:
	explicit Cpf(std::string number);

	std::string getNumber() const;
};

