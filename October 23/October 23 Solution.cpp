class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        if(n<3) return false;
        
        vector<int>minValues(n,INT_MAX);
        
        for(int i=1;i<n;i++)
            minValues[i] = min(minValues[i-1],nums[i-1]);
        
        stack<int>stak;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!stak.empty() && stak.top()<=minValues[i])
                stak.pop();
            
            if(!stak.empty() && stak.top()< nums[i]) 
                return true;
            
            stak.push(nums[i]);
        }
        
        return false;

    }
};
