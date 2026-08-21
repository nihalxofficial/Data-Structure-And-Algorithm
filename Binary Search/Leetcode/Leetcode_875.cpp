#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isValid(vector<int>&arr, int n, int h, int k){
        long long hour=0;
        for(int i=0; i<n; i++){
            hour+= ceil((double)arr[i]/k);
        }
        return hour > h ? false : true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
    
        int st=1, end=*max_element(piles.begin(), piles.end()), ans=-1;
        while(st<=end){
            int mid= st+ (end-st)/2;
            if(isValid(piles, n, h, mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};