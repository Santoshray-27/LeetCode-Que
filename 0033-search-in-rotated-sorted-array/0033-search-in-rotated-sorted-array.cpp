class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target)
                return mid;

            // Check kya left half sorted hai
            if (nums[st] <= nums[mid]) {
                // hai tou kya target left half me hai??
                if (nums[st] <= target && target <= nums[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else { // Right half is sorted
                // hai tou kya target right half me hai??
                if (nums[mid] <= target && target <= nums[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
