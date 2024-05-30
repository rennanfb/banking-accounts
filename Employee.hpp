#pragma once
#include "Person.hpp"

class Employee : public Person
{
private:
	float salary;
public:
	Employee(Cpf cpf, std::string name, float salary);
	virtual float salaryBonus() const = 0;

	float getSalary() const;
};

