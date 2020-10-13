class Solution {
public:
    bool buddyStrings(string A, string B) {
        
        if(A.size() != B.size())
            return false;
        
        unordered_set<char> a(A.begin(), A.end());
        if( A == B && a.size() < B.size() )
            return true;
        
        vector<int> dis;
        for(int i=0; i<A.size(); i++)
            if(A[i] != B[i])
                dis.push_back(i);
        
        if(dis.size()==2 && A[dis[0]]==B[dis[1]] && A[dis[1]]==B[dis[0]])
            return true;
        
        return false;
        
    }
};
