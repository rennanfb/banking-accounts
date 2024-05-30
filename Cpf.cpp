#include "Cpf.hpp"

Cpf::Cpf(std::string number):
	number(number) 
{

}

std::string Cpf::getNumber() const
{
	return number;
}