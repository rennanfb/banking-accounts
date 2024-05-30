#pragma once
#include "Account.hpp"

class CurrentAccount final : public Account
{
public:
	CurrentAccount(std::string number, Holder holder);
	float withdrawTax() const override;
	void transferFor(Account& recipient, float value);
};

