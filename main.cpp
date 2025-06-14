#include <iostream>
#include <vector>
#include <string>

#include "BankAccount.h"

void displayMenuOptions();

int main () {
    BankAccount account("Big", 10, 10);

    // std::cout << "Name of account: " << account.getName() << std::endl;

    std::vector<BankAccount> vec; 

    bool done {false};
    while(!done) {
        displayMenuOptions();
        std::cout << "Enter your choice: ";
        char choice;
        std::cin >> choice;

        switch (choice) {
        case '1':
            {
            std::cout << "Enter your name: ";
            std::string name;
            std::cin >> name;
            std::cout << "Enter your account number: ";
            int account_number;
            std::cin >> account_number;
            std::cout << "Enter your initial deposit: ";
            float initial_deposit;
            std::cin >> initial_deposit;
            vec.push_back(BankAccount(name, account_number, initial_deposit));
            std::cout << "Account is created\n";
            break;
            }

        case '2':
        {
            std::cout << "Enter your account number: ";
            int account_number;
            std::cin >> account_number;

            for (auto i = 0; i < vec.size(); i++)
            {
                if (vec[i].getAccountNumber() == account_number) {
                    std::cout << "Enter your deposit amount: ";
                    float deposit_amount;
                    std::cin >> deposit_amount;
                    vec[i].deposit(deposit_amount);
                    break;
                }

                std::cout << "Error: Bank account can't be found!\n";
            }
            break;
        }

        case '3':
        {
            std::cout << "Enter your account number: ";
            int account_number;
            std::cin >> account_number;

            for (int i {0}; i < vec.size(); ++i) {
                if (vec[i].getAccountNumber() == account_number) {
                    std::cout << "Enter your withdraw amount: ";
                    float withdraw_amount;
                    std::cin >> withdraw_amount;
                    if (vec[i].getBalance() >= withdraw_amount) {
                        vec[i].withdraw(withdraw_amount);
                        break;
                    }
                    std::cout << "You can't withdraw as there is insufficient balance\n;
                    break;
                }
                std::cout << "Error: Bank account can't be found!\n";
            }

            break;
        }
        case '4':
        {
            std::cout << "Enter your account number: ";
            int account_number;
            std::cin >> account_number;

            for (auto i = 0; i < vec.size(); i++)
            {
                if (vec[i].getAccountNumber() == account_number) {
                    std::cout << "============================\n";
                    std::cout << "Name: " << vec[i].getName() << "\n";
                    std::cout << "Account Number: " << vec[i].getAccountNumber() << "\n";
                    std::cout << "Balance: " << vec[i].getBalance() << "\n";
                    std::cout << "============================\n";
                    break;
                }
                std::cout << "Error: Bank account can't be found!\n";
            }
            break;
        }
        case '5':
            done = true;
            std::cout << "Quitting...\n";
            break;
        default:
            break;
        }

    }
    return 0;
}


/*
1. Create Account

2. Deposit Money

3. Withdraw Money

4. Display Account Details

5. Exit
*/

void displayMenuOptions () {
    std::cout << "1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Display Account Details\n5. Exit\n";
}