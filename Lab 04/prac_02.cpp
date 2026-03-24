/* 2. Write a C++ program to calculate the percentage of a student. Accept the
marks of five subjects (Physics, Chemistry, Math, Biology, and English) in base
class. A class will derived from the base class which includes a function to find
the total marks obtained and another class derived from this first derived class
which calculates and displays the percentage of student.
Hints: Use array for taking the marks of a student. */

#include<iostream>
using namespace std;
class base{
    protected:
    int arr[5];
    public: 
    int sum = 0;
    void setvalue(){
        cout<< "Enter the marks of Physics, Chemistry, Math, Biology and English: ";
        for (int i = 0; i < 5; i++)
        {
            cin>> arr[i];
        }
        
    }
};
class derive1: public base{
    public:
    void total_marks(){
      for (int i = 0; i < 5; i++)
      {
        sum += arr[i];
      }
      cout<<"Total marks: "<<sum<<endl;
      
    }
};
class derive2: public derive1{
    public:
    void percentage(){
      cout<<"Percentage: "<< sum/5<<"%"<<endl;
    }
};
int main(){
    derive2 obj;
    obj.setvalue();
    obj.total_marks();
    obj.percentage();
    return 0;
}