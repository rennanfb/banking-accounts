#include "CurrentAccount.hpp"

CurrentAccount::CurrentAccount(std::string number, Holder holder) :
	Account(number, holder) 
{
}

float CurrentAccount::withdrawTax() const {
	return 0.05;
}

void CurrentAccount::transferFor(Account& recipient, float value) {
	withdraw(value);
	recipient.deposit(value);
}