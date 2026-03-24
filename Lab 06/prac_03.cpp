/* Write a program in C++ to Check Whether a Number can be expressed as
Sum of Two Prime Numbers using the friend function. */

#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


class number {
private:
    int num;
    friend void sum(number);

public:
    number() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

void sum(number n)
{
    int first, second;
    cout << "Prime pairs: " << endl;
    for (int i = 2; i <= n.num / 2; i++)
    {
        first = i;
        second = n.num - first;
        if (isPrime(first) && isPrime(second))
        {
            cout << first << " + " << second << endl;
        }
    }
}


int main()
{
    number obj1;
    sum(obj1);
    return 0;
}