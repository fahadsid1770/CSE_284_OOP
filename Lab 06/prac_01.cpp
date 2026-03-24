// Write a C++ Program to display the reverse of a number using the Friend function.

#include <iostream>
using namespace std;

class number {
private:
    int num;
    friend int reverse(number);

public:
    number()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
};

int reverse(number numm)
{
    int reverse = 0;
    int temp = numm.num;
    while (temp != 0)
    {
        int r = temp % 10;
        reverse = (reverse * 10) + r;
        temp /= 10;
    }
    return reverse;
}
int main()
{
    number obj1;
    int result = reverse(obj1);
    cout << "Reversed number: " << result << endl;
    return 0;
}