/* class student
member var a,b
5 student object create jar jonno a and b ache
prottekbar object create krle object count print ini valur 100 */

#include <iostream>
using namespace std;

class Student
{
private:
    int a, b;
    static int objectCount;

public:
    Student(int aa, int bb)
    {
        a = aa;
        b = bb;
        cout << "a : "<<a<< endl;
        cout << "b : "<<b<< endl;
        objectCount++;
    }
    Student()
    {
        objectCount++;
    }
    static int getCount()
    {
        return objectCount;
    }
   
};
int Student::objectCount = 100;
int main()
{
    Student s1(1,7);
    cout << "Total objects: " << Student::getCount() << endl;


    return 0;
}