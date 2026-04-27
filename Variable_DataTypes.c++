// Data Types
// int
// char
// float
// double
// double

#include<iostream>
using namespace std;

int main(){
    int age = 22;
    char grade = 'A';
    float PI = 3.1416f;
    bool isSafe = true;
    double price = 99.99;

    cout<<"My age is " <<age<<endl;
    cout<<"Int size is "<< sizeof(age)<<" Bytes"<<endl;
    cout<<"My grade is "<<grade<<endl;
    cout<<"Char size is "<<sizeof(grade)<<" Bytes"<<endl;
    cout<<"Value of PI is "<<PI<<endl;
    cout<<"Float size is "<<sizeof(PI)<<" Bytes"<<endl;
    cout<<"Boolean output is "<<isSafe<<endl;
    cout<<"Bool size is "<<sizeof(isSafe)<<" Bytes"<<endl;
    cout<<"Product price is "<<price<<endl;
    cout<<"Double size is "<<sizeof(price)<<" Bytes"<<endl;

    // Type Casting - small sie data to big size data
    char result = 'A';
    int value = result;
    cout<<value<<endl;
    // big size data to small size data

    double Price = 110.2345;
    int newPrice = (int)Price;
    cout<<newPrice<<endl;
    cout<<sizeof(newPrice)<<endl;


    // Input

    cout<<"Enter your age: ";
    int Age;
    cin >> Age;
    cout<<"Your age is: "<< Age << endl;

    return 0;
}