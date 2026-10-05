class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int left = 0;
        // int right = nums.size() - 1;

        // while (left <= right) {
        //     int mid = left + (right - left) / 2;
        //     if (nums[mid] == target) {
        //         return mid;
        //     } else if (nums[mid] < target) {
        //         left = mid + 1;
        //     } else {
        //         right = mid - 1;
        //     }
        // }

        // return left;



        // ------LOWER BOUND-----
        // meko sabse chota index find krna hai jiski value target se > hai ya = hai
        int ans = nums.size();
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(nums[m] >= target){
                ans = m;
                r = m - 1;
            }else {
                l = m + 1;
            }
        }
        return ans;
    }
};