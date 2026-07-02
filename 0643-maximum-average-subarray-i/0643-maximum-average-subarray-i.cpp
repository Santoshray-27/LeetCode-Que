class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double n = nums.size();
        double st = 0;
        double end = 0;
        double sum = 0;
        double avg = 0;
        double maxi = INT_MIN;

        while(end < n){
            sum += nums[end];
            if((end-st+1) < k){
                end++;
            }else if((end-st+1) == k){
                avg = sum / k;
                maxi = max(avg,maxi);
                sum -= nums[st];
                st++;
                end++;
            }
        }
        return maxi;
    }
};