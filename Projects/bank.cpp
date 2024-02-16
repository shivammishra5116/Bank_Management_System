#include <iostream>
#include <stdio.h>
#include <conio.h>
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
    //if (amt < 0)
    
        //cout << "Invalid amount";
        amount = amount + amt;
    
}
void Bank ::withdraw(int amt)
{
    if (amt < 0)
    
     cout << "Invalid amount";
    
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
    char ch1, ch2, ch3, ch4;
   int count = 4;
    clscr();
   while (count != 0)
    {
        cout << "\n enter pin:";
        ch1 = getch();
        cout << "*";
        ch2 = getch();
        cout << "*";
        ch3 = getch();
        cout << "*";
        ch4 = getch();
        cout << "*";
        if (ch1 == '1' && ch2 == '2' && ch3 == '3' && ch4 == '4')
            break;
        else
            count--;
        cout << "\nInvalid pin: only " << count << " chances remaining";
    }
    if (count == 0)
    {
        cout << "\nyour account is block for 24 hours:please contact to your Bank Branch....";
    }
    if (ch1 == '1' && ch2 == '2' && ch3 == '3' && ch4 == '4')
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
            case 3:
            {
                B.balance();
            }
            }
        } while (choice != 4);
    }
    else
        
    cout << "Invalid pin:";
}
