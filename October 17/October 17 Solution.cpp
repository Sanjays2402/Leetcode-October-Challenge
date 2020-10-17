class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        vector<string> res;
        if(s.size() <= 10)
            return res;
        
        string temp = "";
        unordered_map<string, int> hash;
        for(int i=0; i<10; i++)
        {
            temp += s[i];
        }
        hash[temp] += 1;
        
        for(int i=10; i<s.size(); i++)
        {
            temp.erase(temp.begin());
            temp += s[i];
            hash[temp] += 1;
        }
        
        for(auto it: hash)
        {
            //cout<<it.first<<" -> "<<it.second<<endl;
            if(it.second > 1)
            {
                res.push_back(it.first);
                it.second = 0;
            }
        }
        return res;
    }
};
