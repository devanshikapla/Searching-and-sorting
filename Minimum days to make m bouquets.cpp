class Solution {
    bool inspect(int mid,vector<int>& bloomDay,int M,int K)
    {
        int bloomed = 0;
        int total = 0;
        for(int i = 0; i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                bloomed++;
                if(bloomed == K)
                {
                    total++;
                    bloomed = 0;
                }
            }
            else bloomed = 0;
        }
        if(total >= M)
        {
            return true;
        }
        else return false;
    }
  public:
    int solve(int M, int K, vector<int> &bloomDay)
    {
        
      int l = *min_element(bloomDay.begin() , bloomDay.end()),
      r = *max_element(bloomDay.begin() , bloomDay.end());
        int ans = -1;
        if(M*K>bloomDay.size())return -1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(inspect(mid,bloomDay,M,K))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans;
    }
};
