#include<iostream>
using namespace std;

int main(){


    // while Loop---------
    // int count = 1;
    // while (count<=5){
    //     cout<< count << " ";
    //     count ++;
    // } cout << endl;


    // For Loop----------
    // for (int i = 1 ; i <= 10; i++){
    //     cout << i << " ";
    // } cout << endl;


    // int sum = 1;
    // for ( int i = 1; i<= 100; i = i+2){
    //     sum += i;
    // }cout << sum;

    // Do While Loop---------
    // do {
    //     cout << "Result of do";
    // }while(3>5);


    // Check wether is prime no or not-----------------
    // int n = 7;
    // bool isPrime = true;
    // for (int i = 2; i<=(n-1); i++ ){ -------//Or__ for (int = 2 ; i * i <=n; i++)
    //     if (n%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true){
    //     cout << "This number is prime";
    // }else{
    //     cout << "This number is not Prime";
    // }

    // Nested Loops----------
    // int m = 5;
    // for ( int i = 1; i<=m; i++){
    //     int n = 20;
    //     for (int j = 1; j<=n; j++){
    //         cout << "*";
    //     }cout << endl;
    // }


    // int n = 7;
    // int sum = 0;
    // for ( int i = 3; i<=n; i++){
    //     if ( i %3 == 0){
    //         sum += i;
    //     }
    // } cout << sum << endl;


    int n = 10;
    
    if (n<0){
        cout << "Please Enter A valid number"<< endl;
    }else if (n==1 || n==0){
        cout << "Factorial is 1" << endl;
    }else{
        int fact = 1;
        for ( int i = 1; i<=n; i++){
            fact *= i;

        } cout << fact;
    }
    
    return 0;
}