#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int st=1, end=x/2, ans;
        while(st<=end){
            long long mid = st+ (end-st)/2;
            if(mid*mid==x){
                return mid;
            }else if(mid*mid<x){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
        
    }
};