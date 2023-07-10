class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0;
        int j = 0;
        int n = g.size();
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int m = s.size();
        int cnt = 0;
        while(i < n && j < m){
            if(s[j] >= g[i]){
                cnt++;
                i++;

                j++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};
