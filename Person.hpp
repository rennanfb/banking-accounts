#pragma once
#include "Cpf.hpp"

class Person
{
protected:
	Cpf cpf;
	std::string name;
public:
	Person(Cpf cpf, std::string name);
};

