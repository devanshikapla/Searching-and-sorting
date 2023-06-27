#include <bits/stdc++.h>

bool possible(vector < int > & stalls , int distance , int cows){
    int cntCows = 1;
    int last = stalls[0];
    for(int i = 1; i < stalls.size() ; i++){
        if(stalls[i] - last >= distance){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows >= cows){
            return true;
        }

    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin() , stalls.end());
    int n = stalls.size();
    int start = 1; int end = stalls[n - 1] - stalls[0];
    int ans = -1;
    while(start <= end){
        int mid = (start +(-start + end)/2);
        if(possible(stalls , mid , k) == true){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
