#pragma once
#include "Employee.hpp"

class Cashier : public Employee
{
public:
	Cashier(Cpf cpf, std::string name, float salary);
	float salaryBonus() const override;
};

