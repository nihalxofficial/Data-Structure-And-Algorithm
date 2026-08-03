class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int st = 0;
        int end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Left half is sorted
            if (nums[st] <= nums[mid]) {
                ans = min(ans, nums[st]);
                st = mid + 1;
            }
            // Right half is sorted
            else {
                ans = min(ans, nums[mid]);
                end = mid - 1;
            }
        }

        return ans;
    }
};