#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int duplicate;
        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                duplicate=nums[i];
                break;
            }
            s.insert(nums[i]);
        }
        return duplicate;
        
    }
};