#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int first = 0;
    int last = sizeof(arr)/sizeof(int)-1;
    while(first<last){
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
    for(int i =0; i<6; i++){
        cout << arr[i] << " ";
    }
   

    return 0;
}