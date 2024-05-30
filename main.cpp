#include "Account.hpp"
#include "SavingAccount.hpp"
#include "CurrentAccount.hpp"
#include "Cpf.hpp"
#include "Holder.hpp"
#include "Person.hpp"

//test function

void doWithdraw(Account& account) {
	account.withdraw(200);
}


int main() {

	//random tests
	std::cout << "------------------test---------------------" << std::endl;

	SavingAccount testSavingAcc("999999", Holder(Cpf("000.000.000-00"), "testUser", "apassword"));
	testSavingAcc.deposit(500);
	doWithdraw(testSavingAcc);
	std::cout << "(test saving funcion)Balance amount: " << testSavingAcc.getBalance() << std::endl;

	CurrentAccount testCurrentAcc("999999", Holder(Cpf("000.000.000-00"), "testUser", "apassword"));
	testCurrentAcc.deposit(500);
	doWithdraw(testCurrentAcc);
	std::cout << "(test current funcion)Balance amount: " << testCurrentAcc.getBalance() << std::endl;

	testCurrentAcc.transferFor(testSavingAcc, 100);
	std::cout << "(test saving funcion)Balance amount after transfer: " << testSavingAcc.getBalance() << std::endl;
	std::cout << "(test current funcion)Balance amount after transfer: " << testCurrentAcc.getBalance() << std::endl;


	std::cout << "------------------test---------------------" << std::endl;
	std::cout << std::endl;
	
	//CurrentAccount tests

	CurrentAccount anAccount("123456", Holder(Cpf("123.456.789-10"), "Rennan", "apassword"));

	anAccount.deposit(250);
	anAccount.withdraw(50);
	
	std::cout << "Holder name: " << anAccount.getHolderName() << std::endl;
	std::cout << "Holder CPF: " << anAccount.getHolderCpf() << std::endl;
	std::cout << "Account Number: " << anAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << anAccount.getBalance() << std::endl;


	std::cout << std::endl;

	CurrentAccount anotherAccount("654321", Holder(Cpf("098.765.432-10"), "Ordis", "apassword"));

	anotherAccount.deposit(578);
	anotherAccount.withdraw(78);

	std::cout << "Holder name: " << anotherAccount.getHolderName() << std::endl;
	std::cout << "Holder CPF: " << anotherAccount.getHolderCpf() << std::endl;
	std::cout << "Account Number: " << anotherAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << anotherAccount.getBalance() << std::endl;

	std::cout << std::endl;

	Holder aHolder(Cpf("999.999.999-99"), "Teshin", "apassword");
	CurrentAccount andAnotherAccount("789123", aHolder);

	andAnotherAccount.deposit(999);
	andAnotherAccount.withdraw(99);

	std::cout << "Holder name: " << aHolder.getName() << std::endl;
	std::cout << "Holder CPF: " << aHolder.getCpf() << std::endl;
	std::cout << "Account Number: " << andAnotherAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << andAnotherAccount.getBalance() << std::endl;

	std::cout << std::endl;

	std::cout << "Total Accounts: " << Account::getAccountAmount() << std::endl;

	std::cout << std::endl;

	//SavingAccount tests

	SavingAccount anSavingAccount("123456", Holder(Cpf("123.456.789-10"), "Rennan", "apassword"));

	anSavingAccount.deposit(250);
	anSavingAccount.withdraw(50);

	std::cout << "Holder name: " << anSavingAccount.getHolderName() << std::endl;
	std::cout << "Holder CPF: " << anSavingAccount.getHolderCpf() << std::endl;
	std::cout << "Account Number: " << anSavingAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << anSavingAccount.getBalance() << std::endl;


	std::cout << std::endl;

	SavingAccount anotherSavingAccount("654321", Holder(Cpf("098.765.432-10"), "Ordis", "apassword"));

	anotherSavingAccount.deposit(578);
	anotherSavingAccount.withdraw(78);

	std::cout << "Holder name: " << anotherSavingAccount.getHolderName() << std::endl;
	std::cout << "Holder CPF: " << anotherSavingAccount.getHolderCpf() << std::endl;
	std::cout << "Account Number: " << anotherSavingAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << anotherSavingAccount.getBalance() << std::endl;

	std::cout << std::endl;

	Holder aSavingHolder(Cpf("999.999.999-99"), "Teshin", "apassword");
	SavingAccount andAnotherSavingAccount("789123", aHolder);

	andAnotherSavingAccount.deposit(999);
	andAnotherSavingAccount.withdraw(99);

	std::cout << "Holder name: " << aSavingHolder.getName() << std::endl;
	std::cout << "Holder CPF: " << aSavingHolder.getCpf() << std::endl;
	std::cout << "Account Number: " << andAnotherSavingAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << andAnotherSavingAccount.getBalance() << std::endl;

	std::cout << std::endl;

	std::cout << "Total Accounts: " << Account::getAccountAmount() << std::endl;

	std::cout << std::endl;
	
}
