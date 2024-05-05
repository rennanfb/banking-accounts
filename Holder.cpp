#include "Holder.hpp"
#include "Cpf.hpp"

Holder::Holder(std::string name, Cpf cpf) :
	name(name),
	cpf(cpf)
{

}

std::string Holder::getName() 
{
	return name;
}

std::string Holder::getCpf() 
{
	return cpf.getNumber();
}
