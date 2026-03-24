/* A program to understand the Function Overloading in C++. */

#include<iostream>
using namespace std;

void print (int var){
    cout<<"Integer number: "<<var<<endl;
} 
void print (float var){
    cout<<"Float number: "<<var<<endl;
} 
void print (int var1, float var2){
    cout<<"Integer number: "<<var1<<endl;
    cout<<"Float number: "<< var2<<endl;
} 
// void print (int var1, int var2){
//     cout<<"Integer number 1: "<<var1<<endl;
//     cout<<"Integer number 2: "<< var2<<endl;
// }
// void print (float var1, float var2){
//     cout<<"Float number 1: "<<var1<<endl;
//     cout<<"Float number 2: "<< var2<<endl;
// }
int main(){
    int a= 18;
    float b= 60.6;
    // float c =90.7;
    print(a);
    cout<<"------"<<endl;
    print(b);
    cout<<"------"<<endl;
    print(a,b);
    // cout<<"------"<<endl;
    // print(c,b);
return 0;
}