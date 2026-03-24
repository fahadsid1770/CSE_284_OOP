#include<iostream>
using namespace std;

class Student{
    private: 
    string fN;
    string lN;
    int age;

    public:
    Student(){
        fN = "Nabila";
        lN = "Wahida";
        age = 46;
        cout<<"Name: "<<fN<<"\nlast name: "<<lN<<"\nAge: "<<age<<endl;
    }
    Student(string aa, string bb, int cc){
        fN = aa;
        lN = bb;
        age = cc;
        cout<<"Name: "<<fN<<"\nlast name: "<<lN<<"\nAge: "<<age<<endl;
    }

};
int main(){
    Student stu1;
    cout<<"----------"<<endl;
    Student stu2("Maowa" ,"Nisat",50);

return 0;
}