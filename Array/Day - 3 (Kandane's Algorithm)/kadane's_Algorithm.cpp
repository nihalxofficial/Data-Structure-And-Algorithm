#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxSum = 0;
    int curSum = 0;
    for(int i=0;i<n;i++){
        curSum += arr[i];
        maxSum = max(maxSum,curSum);
        if(curSum<0){
            curSum = 0;
        }

    }
        cout<<maxSum;

    return 0;
}