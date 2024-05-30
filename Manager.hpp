#pragma once
#include "Employee.hpp"
#include "Authenticable.hpp"

class Manager : public Employee, public Authenticable
{
public:
	Manager(Cpf cpf, std::string name, float salary, std::string password);
	float salaryBonus() const override;
};

