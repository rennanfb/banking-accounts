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

	float withdrawFare = withdrawAmount * withdrawTax();
	float discountedAmount = withdrawAmount + withdrawFare;

	if (discountedAmount > balance) {
		std::cout << "Not enought balance to withdraw this amount." << std::endl;
		return;
	}
	balance -= discountedAmount;
}

void Account::deposit(float depositAmount) 
{
	if (depositAmount < 0) {
		std::cout << "Invalid Amount" << std::endl;
	}
	balance += depositAmount;
}

std::string Account::getNumber() const
{
	return number;
}

float Account::getBalance() const 
{
	return balance;
}

std::string Account::getHolderName() const 
{
	return holder.getName();
}

std::string Account::getHolderCpf() const
{
	return holder.getCpf();
}
