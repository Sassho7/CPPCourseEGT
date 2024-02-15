#include "Bank.h"

Account::Account()
{
    
};
Account::Account(double balance)
{
    
    if (balance >= 0)
    {
        this->balance = balance;
    } else 
    {
        this->balance = 0;
        cout << "The initial balance is invalid." << endl;
    };
};
void Account::credit(double amount)
{
    if (amount > 0) 
    {
        this->balance += amount;
    } else 
    {
        cout << "The amount must be positive value." << endl;
    };
    
};
void Account::debit(double amount)
{
    
   if(balance - amount >= 0)
   {
        this->balance -= amount;
   } else{
        cout << "Debit amount exceeded account balance" << endl;
   }
};
double Account::getBalance()
{
    return this->balance;
};