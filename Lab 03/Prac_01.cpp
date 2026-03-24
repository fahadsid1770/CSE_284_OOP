/*
Write a C++ program to define a class Batsman with the following specifications,

batsman ID: 6 digits roll number
static member count: To keep track on number of object
static function getcount(): return the value of count
function getname(): To take batsman name as input
function showname(): To show batsman name
Access all the data members and member functions using the objects of class
Batsman.
*/

#include <iostream>
using namespace std;
class Batsman
{
private:
    int bID;
    string bName;
    static int objectCount;

public:
    Batsman()
    {
        objectCount++;
    }

    static int getCount()
    {
        return objectCount;
    } 
    void getname(){
        cout<< "Enter Batsman Name: ";
        cin >> bName;
    }
    void showname(){
        cout<< "Batsman Name: "<<bName<<endl;
    }
};

int Batsman::objectCount = 0;

int main()
{
    int n;
    cout<<"Initially number of objects: "<<Batsman::getCount()<<endl;
    cout<<"Enter number of entry: ";
    cin>>n;
    Batsman batsmen[n];
    for (int i = 0; i < n; i++)
    {
       batsmen[i].getname();
    }
    cout<<"Finally number of objects: "<<Batsman::getCount()<<endl;
    for (int i = 0; i < n; i++)
    {
       batsmen[i].showname();
    }
    return 0;
}