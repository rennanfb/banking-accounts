#pragma once
#include <string>
#include "Cpf.hpp"
#include "Person.hpp"
#include "Authenticable.hpp"

class Holder : public Person, public Authenticable {
public:
	Holder(Cpf cpf, std::string name, std::string password);

	std::string getCpf() const;
	std::string getName() const;
};

