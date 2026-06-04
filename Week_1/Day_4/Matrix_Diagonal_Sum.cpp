class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int currSum=0;

        for(int i=0;i<n;i++)
        {  
            currSum+=mat[i][i];
            if(i!=n-1-i)
            {
                currSum+=mat[i][n-1-i];
            }
        
        }
        return currSum;
    }
};
