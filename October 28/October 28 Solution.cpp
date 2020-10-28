class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> res;
        
        for(int i=0; i<nums.size(); i++)
        {
            int flag=0;
            string s = to_string(nums[i]);
            while(i<nums.size()-1 && nums[i+1] == nums[i]+1)
                i++, flag=1;
            
            if(flag)
                 s += "->" + to_string(nums[i]);
            res.push_back(s);
        }
        
        return res;
    }
};
