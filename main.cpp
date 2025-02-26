#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"

int main() {
    BankAccount accountA("52572480","Brian McBride",2575.50);
    accountA.display();
    SavingsAccount accountB("45637289", "Don Duck", 345.85, 3.75);
    accountB.display();
    return 0;
}
