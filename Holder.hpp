#pragma once
#include <string>
#include "Cpf.hpp"

class Holder {
private:
	std::string name;
	Cpf cpf;
public:
	explicit Holder(std::string name, Cpf cpf);
	std::string getName();
	std::string getCpf();
};

