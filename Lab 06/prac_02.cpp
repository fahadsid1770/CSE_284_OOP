/*  Write a C++ program to find the number and sum of all integer between 100
and 200 which are divisible by 11 with friend function. */
#include <iostream>
using namespace std;

class number
{
private:
    int start, end;

    friend int sum(number);

public:
    number(int s, int e)
    {
        start = s;
        end = e;
    }
};

int sum(number n)
{
    int sum = 0;
    for (int i = n.start; i <= n.end; i++)
    {
        if (i % 11 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    return sum;
}
int main()
{
    number obj1(100, 200);
    int result = sum(obj1);
    cout << "\nSum: " << result << endl;

    return 0;
}