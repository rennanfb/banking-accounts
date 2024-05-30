#include "SavingAccount.hpp"

SavingAccount::SavingAccount(std::string number, Holder holder) :
	Account(number, holder)
{
}

float SavingAccount::withdrawTax() const {
	return 0.03;
}
