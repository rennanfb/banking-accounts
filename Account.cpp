#include "Account.hpp"
#include "Cpf.hpp"

int Account::accountAmount = 0;

Account::Account(std::string number, Holder holder) :
	number(number),
	holder(holder),
	balance(0)
{
	accountAmount++;
}

Account::~Account() {
	accountAmount--;
}

int Account::getAccountAmount() 
{
	return accountAmount;
}

void Account::withdraw(float withdrawAmount) 
{
	if (withdrawAmount <= 0) {
		std::cout << "Invalid Amount to withdraw";
		return;
	}
	if (withdrawAmount > balance) {
		std::cout << "Not enought balance to withdraw this amount." << std::endl;
		return;
	}
	balance -= withdrawAmount;
}

void Account::deposit(float depositAmount) 
{
	if (depositAmount < 0) {
		std::cout << "Invalid Amount" << std::endl;
	}
	balance += depositAmount;
}

std::string Account::getNumber() 
{
	return number;
}

float Account::getBalance() const 
{
	return balance;
}

std::string Account::getHolderName() 
{
	return holder.getName();
}

std::string Account::getHolderCpf() 
{
	return holder.getCpf();
}
