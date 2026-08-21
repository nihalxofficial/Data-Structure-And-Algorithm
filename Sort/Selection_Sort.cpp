#include <iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int sI=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[sI]){
                sI=j;
            }
        }
        swap(arr[i], arr[sI]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int arr[]= {8,4,1,5,2,3,6,7,9};
    int n=9;
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}