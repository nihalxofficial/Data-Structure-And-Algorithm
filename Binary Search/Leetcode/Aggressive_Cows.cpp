#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    bool isValid(vector<int>&arr, int n, int k, int mid){
        int cow=1, lastPos=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]-lastPos >= mid){
                cow++;
                lastPos=arr[i];
            }
        }
        return cow>=k? true : false;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int end = arr[n - 1] - arr[0];
        int st=0, ans=-1;
        while(st<=end){
            int mid= st + (end-st)/2;
            if(isValid(arr, n, k, mid)){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};