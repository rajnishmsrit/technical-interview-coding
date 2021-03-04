class Solution {
public:
    bool subsetSum(vector<int>& nums, int n, int sum){
        if (sum == 0)
            return true;

        if (n<0){
            return false;
        }

        if (nums[n]>sum)
            subsetSum(nums, n-1, sum);

        return subsetSum(nums, n-1, sum) + subsetSum(nums, n-1, sum-nums[n]);        
    }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto i:nums) sum+=i;
        if(sum%2==0){
            return subsetSum(nums, nums.size()-1, sum/2);
        }
        return false;        
    }
};