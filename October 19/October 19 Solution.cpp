class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        
        int res = INT_MAX;
        for(int i=1; i<=6; i++)
        {
            int count=0, count1=0;
            for(int j=0; j<A.size(); j++)
            {
                if(A[j]!=i && B[j]==i)
                    count++;
                else if(A[j]!=i && B[j]!=i)
                {
                    count=INT_MAX;
                    break;
                }
            }
            for(int j=0; j<A.size(); j++)
            {
                if(B[j]!=i && A[j]==i)
                    count1++;
                else if(A[j]!=i && B[j]!=i)
                {
                    count1=INT_MAX;
                    break;
                }
            }
            res = min(res, min(count, count1));
        }
        if(res == INT_MAX)
            return -1;
        return res;
    }
};
