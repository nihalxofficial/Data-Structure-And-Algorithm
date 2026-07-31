#include<iostream>
using namespace std;

int main(){
    int arr[] = {30,55,70,90,25,70,40};
    int sum = 0;
    int product = 1;
    int size = sizeof(arr)/sizeof(int);
    // cout << arr[size-1];
    for(int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout<< "Array summation is: " << sum << endl; 
    cout<< "Array product is: " << product << endl; 
}