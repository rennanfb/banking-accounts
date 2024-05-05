#pragma once
#include <string>
#include <iostream>
#include "Holder.hpp"

class Account {
private:

	static int accountAmount;
	std::string number;
	Holder holder;
	float balance;

public:

	Account(std::string number, Holder holder);
	~Account();
	static int getAccountAmount();
	void withdraw(float withdrawAmount);
	void deposit(float depositAmount);

	std::string getNumber();
	float getBalance() const;
	std::string getHolderName();
	std::string getHolderCpf();

};