class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        // code here
         int count, ans=0,m=1;
        int min = INT_MAX;
        for(int i=0;i<N;i++)
        {
            count=0;
            for(int j=0;j<M;j++)
            {
                if(A[i][j]==1)
                  count++;
            }
            if(count<min)
            {
                min = count;
                ans = i+1;
            }
            
        }
        return ans;
    }
};
