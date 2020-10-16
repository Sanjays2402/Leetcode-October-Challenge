class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 0)
            return false;
        
        int m=0, n=matrix[0].size()-1;
        
        while(m < matrix.size() && n >= 0)
        {
            if(matrix[m][n] == target)
                return true;
            
            if(matrix[m][n] < target)
                m++;
            
            else
                n--;
                
        }
        
        return false;
    }
};
