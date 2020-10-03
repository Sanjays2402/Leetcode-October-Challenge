class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if(nums.size() == 0)
            return 0;
        
        int n=nums.size(), ct=0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        unordered_map<int, int> hash;
        
        for(int i=0; i<n; i++)
        {
            if( hash[nums[i]-k] == 1 )
                s.insert({nums[i]-k, nums[i]});
            
            hash[nums[i]]=1;
        }
        return s.size();
    }
};
