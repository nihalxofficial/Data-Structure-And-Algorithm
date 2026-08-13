#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(vector<int>&arr, int n, int days, int maxAllowedCapacity){
        int k=1, weight=0;
        for(int i=0; i<n; i++){
            if(arr[i]>maxAllowedCapacity){
                return false;
            }
            if(weight+arr[i]<=maxAllowedCapacity){
                weight+=arr[i];
            }else{
                k++;
                weight=arr[i];
            }
        }
        return k>days ? false : true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0, n=weights.size();
        for(int i=0; i<n; i++){
            sum+=weights[i];
        }

        int st=0, end=sum, ans;
        while(st<=end){
            int mid= st + (end-st)/2;
            if(isValid(weights, n, days, mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};