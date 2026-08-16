#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0, end=n-1, first=-1, last=-1;
        vector<int>ans;
        while(st<=end){
            int mid = st+ (end-st)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }else if(nums[mid]<target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        st=0;
        end=n-1;
        while(st<=end){
            int mid = st+ (end-st)/2;
            if(nums[mid]==target){
                last=mid;
                st=mid+1;
            }else if(nums[mid]<target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }

        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
    }
};