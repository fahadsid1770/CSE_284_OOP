/* Write a C++ program to add two numbers. Accept these two numbers from
the user in base class and display the sum of these two numbers in derived class. */

#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    int b;
    public: 
    void setvalue(){
        cout<<"Enter the first value: ";
        cin>>a;
        cout<<"Enter the second value: ";
        cin>>b;
    }
};
class derive: public base{
    public:
    void sum(){
        cout << "Sum: "<< a+b <<endl;
    }
};
int main(){
    derive obj;
    obj.setvalue();
    obj.sum();
    return 0;
}