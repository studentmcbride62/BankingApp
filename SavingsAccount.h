#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    double m_interestRate;  // 3.65% APY
public:
    SavingsAccount():BankAccount() {
        m_interestRate = 0;
    }
    SavingsAccount(std::string account, std::string name, double balance, double interestRate) : BankAccount(account, name, balance) {
        m_interestRate = interestRate;
    }
    void addMonthlyInterest() {
        m_balance = m_balance * (1 + m_interestRate/12/100);
    }
    void display() {
        BankAccount::display();
        std::cout << "Interest Rate: " << m_interestRate << "% APY" << std::endl;
    }

};
#endif //SAVINGSACCOUNT_H
