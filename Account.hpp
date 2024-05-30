#pragma once
#include <string>
#include <iostream>
#include "Holder.hpp"

class Account {
private:

	static int accountAmount;
	std::string number;
	Holder holder;

protected:
	float balance;

public:

	Account(std::string number, Holder holder);
	virtual ~Account();
	static int getAccountAmount();
	void withdraw(float withdrawAmount);
	void deposit(float depositAmount);
	virtual float withdrawTax() const = 0;

	std::string getNumber() const;
	float getBalance() const;
	std::string getHolderName() const;
	std::string getHolderCpf() const;

};