#include "Cashier.hpp"

Cashier::Cashier(Cpf cpf, std::string name, float salary) :
	Employee(cpf, name, salary) 
{
}

float Cashier::salaryBonus() const {
	return getSalary() * 0.01;
}