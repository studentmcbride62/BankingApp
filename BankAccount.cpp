#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount() {
    m_account_holder_name = "Default";
    m_account_number = "Default";
    m_balance = 0;
}
BankAccount::BankAccount(std::string account_number, std::string account_holder_name, double initial_balance) {
    m_account_holder_name = account_holder_name;
    m_account_number = account_number;
    m_balance = initial_balance;
}

void BankAccount::deposit(double amount) {
    m_balance += amount;
}
void BankAccount::withdraw(double amount) {
    if (amount > m_balance) {
        std::cout << "\nInsufficient funds to withdraw $" << amount << std::endl;
    }
    else {
        m_balance -= amount;
    }
}
void BankAccount::display() {
    std::cout << "\nAccount Number: " << m_account_number << std::endl;
    std::cout << "Account Holder: " << m_account_holder_name << std::endl;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << "Balance: $" << m_balance << std::endl;
}
