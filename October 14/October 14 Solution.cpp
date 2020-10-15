class Solution {
public:
    int helper(vector<int> &nums, int l, int h)
    {
        int pre = 0, cur = 0;
        for (int i = l; i < h; i++) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }
    int rob(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        if(nums.size() == 1)
            return nums[0];
        
        return max(helper(nums, 0, nums.size()-1), helper(nums, 1, nums.size()));
        
    }
};
