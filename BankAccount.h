#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
protected:  // inherited as accessible in the derived class(es)
    std::string m_account_number;
    std::string m_account_holder_name;
    double m_balance;
public:
    BankAccount(); // default constructor
    BankAccount(std::string account_number, std::string account_holder_name, double initial_balance);
    void deposit(double amount);
    void withdraw(double amount);
    void display();
};

#endif //BANKACCOUNT_H
