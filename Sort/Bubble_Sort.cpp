#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int arr[]= {4,1,5,2,3,6,7,9};
    int n=8;
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}