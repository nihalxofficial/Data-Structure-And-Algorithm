#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int n=nums.size();
        int prefixSum=0;
        int count=0;

        for(int i=0; i<n; i++){
            prefixSum+=nums[i];
            if(m.count(prefixSum-k)){
                count+=m[prefixSum-k];
                m[prefixSum]++;
            }else{
                m[prefixSum]++;
            }
        }
        return count;
    }
};