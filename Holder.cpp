#include "Holder.hpp"
#include "Cpf.hpp"

Holder::Holder(Cpf cpf, std::string name, std::string password) :
	Person(cpf, name),
	Authenticable(password)
{

}

std::string Holder::getCpf() const {
	return cpf.getNumber();
}

std::string Holder::getName() const {
	return name;
}
