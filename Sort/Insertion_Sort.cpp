#include <iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>arr){
    for(int i=1; i<arr.size(); i++){
        int cur=arr[i];
        int prev=i-1;
        while(prev >=0 && cur < arr[prev]){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=cur;
    }
   for(int i=0; i<arr.size(); i++){
        cout << arr[i] <<" ";
    } 
}

int main(){
    vector<int>arr = {4,1,5,2,3,6,7,9};
    insertionSort(arr);
    return 0;
}