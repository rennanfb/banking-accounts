#pragma once
#include "Account.hpp"

class SavingAccount final : public Account
{
public:
	SavingAccount(std::string number, Holder holder);
	float withdrawTax() const override;
};

