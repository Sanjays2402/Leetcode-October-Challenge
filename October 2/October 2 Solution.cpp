class Solution {
public:
    vector<vector<int>> result;
    set<vector<int>> hash;
    void combi(vector<int>& candidates, int target, vector<int> com, int start) 
    {
        if(target<0)
            return;
         
        if(target == 0)
        {
            sort(com.begin(), com.end());
            hash.insert(com);
            //result.push_back(com);
            return;
        }
        
        for(int i=start; i<candidates.size(); i++)
        {
            com.push_back(candidates[i]);
            combi(candidates, target-candidates[i], com, i+1);
            combi(candidates, target-candidates[i], com, i);
            com.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> com;
        combi(candidates, target, com, 0);
        
        for(auto it: hash)
            result.push_back(it);
        return result;
        
    }
};
