#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        int st = 0;
        int end = n - 1;
        while (st < end) {
            int mid = st + (end - st) / 2;
            
            // Check boundaries
            if (mid == 0 && nums[0] != nums[1]) return nums[mid];
            if (mid == n - 1 && nums[n - 1] != nums[n - 2]) return nums[mid];
            
            // Check if mid is the single element
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }
            
            if (mid % 2 == 0) {
                // For even mid: pairs should be at (mid, mid+1)
                if (nums[mid] == nums[mid + 1]) {
                    st = mid + 2;  // Pair matches, single is on right
                } else {
                    end = mid - 1; // Single is on left
                }
            } else {
                // For odd mid: pairs should be at (mid-1, mid)
                if (nums[mid] == nums[mid - 1]) {
                    st = mid + 1;  // Pair matches, single is on right
                } else {
                    end = mid - 1; // Single is on left
                }
            }
        }
        return nums[st];
    }
};