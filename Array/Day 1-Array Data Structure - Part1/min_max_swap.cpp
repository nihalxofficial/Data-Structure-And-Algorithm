#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {30,55,70,90,25,70,40, 20};
    int min =   INT_MAX;
    int max = INT_MIN;
    int min_idx = arr[0];
    int max_idx = arr[0];
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
            min_idx = i;
        }
        if(arr[i]>max){
            max=arr[i];
            max_idx = i;
        }
    }
    swap(arr[min_idx], arr[max_idx]);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    // cout << "Min value: " << min << " at index " << min_idx << endl;
    // cout << "Max value: " << max << " at index " << max_idx << endl;

    
}