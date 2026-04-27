#include<iostream>
using namespace std;

int main(){

    // Arithmatic Operators------
    // int a = 5, b = 10;
    // int sum = a+b;
    // cout << sum << endl;
    // cout << (b-a) << endl;
    // cout << (a*b) << endl;
    // cout << (b/a) << endl;
    // cout << (b%a) << endl;
    // cout << (5/2) << endl;
    // cout << (5 / float(2)) << endl;


    // Reltonal Operators-----
    // cout << (3 < 5) << endl;
    // cout << (3 > 5) << endl;
    // cout << (3 >= 3) << endl;
    // cout << (3 <= 5) << endl;
    // cout << (3 == 3) << endl;
    // cout << (3 != 5) << endl;

    // Logical Operators------
    // cout << !(3 > 1) << endl;
    // cout << ((3 > 1) || (3>5)) << endl;
    // cout << ((3 > 1) && (3>2)) << endl;

    int a, b;
    cout << "Enter value of a: " << endl;
    cin >> a;

    cout << "Enter value of b: " << endl;
    cin >> b;

    int sum = a + b;
    cout << "The result is: " <<  sum << endl;

    return 0;
}