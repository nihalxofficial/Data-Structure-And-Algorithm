// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>arr, int target){
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid= st+(end-st)/2;
         if(target>arr[mid]){
             st=mid+1;
         }
         if(target<arr[mid]){
             end=mid-1;
         }
         if(target==arr[mid]){
             return mid;
         }
    }
        return -1;
}

int main() {
    vector<int>arr1={-1,0,3,5,6,8,10};
    vector<int>arr2={-2,0,4,6,8,10};
    cout << binarySearch(arr2, 10);
    return 0;
}