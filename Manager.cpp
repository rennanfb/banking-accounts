#include "Manager.hpp"

Manager::Manager(Cpf cpf, std::string name, float salary, std::string password) :
	Employee(cpf, name, salary),
	Authenticable(password)
{

}

float Manager::salaryBonus() const {
	return getSalary() * 0.5;
}
