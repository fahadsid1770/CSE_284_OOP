/* Suppose you have a Savings Account with an initial amount of 500 and
you have to add some more amount to it.
Create a class ’AddMoney’ with a data member named ’amount’ with
an initial value of 500. Now make two constructors of this class as follows:
• without any parameter - no amount will be added to the Savings Account.
• having a parameter which is the amount that will be added to the Savings
Account.
Create an object of the ’AddMoney’ class and display the final amount in
the Savings Account. */

#include <iostream>
using namespace std;

class AddMoney
{
private:
    int amount;

public:
    AddMoney()
    {
        amount = 500;
    }
    AddMoney(int add)
    {
        amount = 500 + add;
    }
    void displayAmount() {
        cout << "\nFinal amount in Savings Account: " << amount <<endl;
    }
};
int main()
{
    AddMoney obj1;
    obj1.displayAmount();

    
    AddMoney obj2(5005);
    obj2.displayAmount();
    return 0;
}