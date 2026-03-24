// CGPA Calculator

#include <iostream>
using namespace std;
class CGPA
{
    private:
    double sub1;
    double sub2;
    double sub3;
    double cr1;
    double cr2;
    double cr3;
    
    public:
    void initData(){
        cout<<"Enter the marks and credit of subject 1: ";
        cin>> sub1>>cr1;
        cout<<"Enter the marks and credit of subject 2: ";
        cin>> sub2>>cr2;
        cout<<"Enter the marks and credit of subject 3: ";
        cin>> sub3>>cr3;
    }
    double calculateCGPA(){
        double sum= (sub1 * cr1) + (sub2 * cr2) +(sub3 * cr3) ;
        double credit = cr1+ cr2 + cr3;
        return sum / credit;
    }
    
     
};
int main()
{
    CGPA stu1;
    
    stu1.initData();
    
    cout<<"Your CGPA is: "<<stu1.calculateCGPA()<<endl;
    
}