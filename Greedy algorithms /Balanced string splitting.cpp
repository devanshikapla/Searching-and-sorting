class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int cntR = 0;
        int cntL = 0;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'R') cntR++;
            if(s[i] == 'L') cntL++;
            if(cntR == cntL){
                cnt++;
            }
        }
        return cnt;
    }
};
