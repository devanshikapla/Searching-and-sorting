long long solve(vector<int>& bt) {
        // code here
        //sorting the burst times;
        sort(bt.begin() , bt.end());
        long long ans = 0;
        long long waiting = 0;
        for(int i = 0 ; i < bt.size() - 1; i++){
            waiting += bt[i];
            ans += waiting;
        }
        return floor(ans/bt.size());
    }
