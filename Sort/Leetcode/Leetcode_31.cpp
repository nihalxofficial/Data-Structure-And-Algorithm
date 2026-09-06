#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Find the pivot element
        int pivot=-1;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            int i=0, j=nums.size()-1;
            while(i<=j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            return;
        }
        // Find 2nd smallest element
        for(int i=nums.size()-1; i>pivot; i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        // Reverse the remaining array
        int i=pivot+1, j=nums.size()-1;
        while(i<=j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
    }
};