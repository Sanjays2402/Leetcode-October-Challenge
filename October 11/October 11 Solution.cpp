class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        string result = "";
        unordered_map<char, int> last, visit;
        stack<char> stk;
        
        for(int i=0; i<s.size(); i++)
            last[s[i]]=i;
        
        for(int i=0; i<s.size(); i++)
        {
            if(visit[s[i]] == 0)
            {
                while(!stk.empty() && stk.top() > s[i] && last[stk.top()] > i)
                {
                    visit[stk.top()]=0;
                    stk.pop();
                }
                stk.push(s[i]);
                visit[s[i]]=1;
            }
        }
        
        while(stk.size() > 0) 
        {
            result += stk.top();
            stk.pop();
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
