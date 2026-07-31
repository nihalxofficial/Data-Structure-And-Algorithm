#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,2,3,4,5};
    int unique[] = {};
    int unique_size = sizeof(unique)/sizeof(int);
    int size = sizeof(arr)/sizeof(int);
    for(int i =0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(i!=j){
                unique[unique_size]=arr[j];
                unique_size++;
            }
        }
    }
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
}