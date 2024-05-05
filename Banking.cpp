#include "Account.hpp"
#include "Cpf.hpp"
#include "Holder.hpp"

int main() {

	Account anAccount("123456", Holder("Rennan", Cpf("123.456.789-10")));

	anAccount.deposit(250);
	anAccount.withdraw(50);
	
	std::cout << "Holder name: " << anAccount.getHolderName() << std::endl;
	std::cout << "Holder CPF: " << anAccount.getHolderCpf() << std::endl;
	std::cout << "Account Number: " << anAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << anAccount.getBalance() << std::endl;


	std::cout << std::endl;

	Account anotherAccount("654321", Holder("Ordis", Cpf("098.765.432-10")));

	anotherAccount.deposit(578);
	anotherAccount.withdraw(78);

	std::cout << "Holder name: " << anotherAccount.getHolderName() << std::endl;
	std::cout << "Holder CPF: " << anotherAccount.getHolderCpf() << std::endl;
	std::cout << "Account Number: " << anotherAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << anotherAccount.getBalance() << std::endl;

	std::cout << std::endl;

	Holder aHolder("Teshin", Cpf("999.999.999-99"));
	Account andAnotherAccount("789123", aHolder);

	andAnotherAccount.deposit(999);
	andAnotherAccount.withdraw(99);

	std::cout << "Holder name: " << aHolder.getName() << std::endl;
	std::cout << "Holder CPF: " << aHolder.getCpf() << std::endl;
	std::cout << "Account Number: " << andAnotherAccount.getNumber() << std::endl;
	std::cout << "Balance amount: " << andAnotherAccount.getBalance() << std::endl;

	std::cout << std::endl;

	std::cout << "Total Accounts: " << Account::getAccountAmount() << std::endl;
}