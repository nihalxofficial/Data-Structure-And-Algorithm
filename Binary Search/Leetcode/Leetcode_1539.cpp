#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int st=0, end=n-1, idx=n; 
        while(st<=end){
            int mid = st+ (end-st)/2;
            if(arr[mid]-(mid+1) >=k){
                idx=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return idx+k;
    }
};