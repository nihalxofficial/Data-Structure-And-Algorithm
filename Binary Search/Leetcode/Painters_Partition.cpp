#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isValid(vector<int>&arr, int n, int k, int maxAllowedMinutes){
        int painter=1, minutes=0;
        for(int i=0; i<n; i++){
            if(arr[i]>maxAllowedMinutes){
                return false;
            }
            if(minutes+arr[i]<=maxAllowedMinutes){
                minutes+=arr[i];
            }else{
                painter++;
                minutes=arr[i];
            }
            
        }
        return painter > k ? false : true;
    }
    
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size(), sum=0, ans;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        
        int st = 0, end=sum;
        while(st<=end){
            int mid= st + (end-st)/2;
            
            if(isValid(arr, n, k, mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
            
        }
        return ans;
    }
};