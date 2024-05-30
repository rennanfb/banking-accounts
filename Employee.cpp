#include "Employee.hpp"

Employee::Employee(Cpf cpf, std::string name, float salary) :
	Person(cpf, name),
	salary(salary)
{

}

float Employee::getSalary() const {
	return salary;
}