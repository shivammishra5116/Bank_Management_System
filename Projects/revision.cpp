#include <iostream>
// #include <stdio.h>
// #include <conio.h>
#define clscr() system("cls")
using namespace std;
class Bank
{
    int amount;

public:
    Bank()
    {
        amount = 0;
    }
    void deposit(int amt);
    void withdraw(int amt);
    void balance();
};
void Bank ::deposit(int amt)
{
    amount = amount + amt;
}
void Bank ::withdraw(int amt)
{
    
    if (amt > amount)
    
        cout << "\nInsufficient balance....pls check";
    
    else
    {
        amount = amount - amt;
    }
}
void Bank ::balance()
{
    cout << "\nyour current bal:" << amount;
}
int main()
{
    int choice, amt;
    Bank B;
    clscr();
    do
    {
        cout << "\n...............BANK APPLICATION...............";
        cout << "\n 1. Deposite ";
        cout << "\n 2. Withdrawal ";
        cout << "\n 3. Balance ";
        cout << "\n 4. Exit ";
        cout << "\n...............................................";
        cout << "\n Enter your choice";
        cin >> choice;

        switch (choice)
        {
        case 1:

        {
            cout << "\n enter amount for deposit:";
            cin >> amt;
            B.deposit(amt);
            break;
        }
        case 2:
        {
            cout << "\n enter amount for withdrawal:";
            cin >> amt;
            B.withdraw(amt);
            break;
        }
        case 3:B.balance();
        
        }
    } while (choice != 4);
}