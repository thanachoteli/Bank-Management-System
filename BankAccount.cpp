#include "BankAccount.h"



BankAccount::BankAccount() {}



BankAccount::BankAccount(std::string name, int account_number, float balance)
    : name(name), account_number(account_number), balance(balance)
{
    // std::cout << "Constructor is called\n";
}


BankAccount::~BankAccount() 
{
    // std::cout << "Destructor is called\n";
}


std::string BankAccount::getName() {
    return name;
}

int BankAccount::getAccountNumber () {
    return account_number;
}

float BankAccount::getBalance () {
    return balance;
}

void BankAccount::deposit(float amount) {
    balance += amount;
}