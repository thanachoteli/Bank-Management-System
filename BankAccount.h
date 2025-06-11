#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>

class BankAccount
{
private:
    std::string name; 
    int account_number;
    float balance;
public:
    BankAccount(/* args */);
    BankAccount(std::string name, int account_number, float balance);
    ~BankAccount();

    std::string getName();
    int getAccountNumber();
    float getBalance();
    
    void deposit(float amount);
};  




#endif