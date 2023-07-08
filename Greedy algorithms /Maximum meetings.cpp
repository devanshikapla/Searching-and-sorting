#include <bits/stdc++.h> 
struct meeting{
    int start;
    int end;
    int pos;
};

bool comparator(struct meeting a , meeting b){
    if(a.end < b.end) return true;
    else if(a.end > b.end) return false;
    else if(a.pos < b.pos) return true;
    return false;

}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = start.size();
    struct meeting meet[n];
    for(int i = 0 ; i < n ; i++)meet[i].start = start[i], meet[i].end = end[i], meet[i].pos = i+1;
    
 
    sort(meet, meet+n, comparator);
 
    vector<int> ans;
    int finish_time = meet[0].end;
    ans.push_back(meet[0].pos);
 
    for(int i=1;i<n;i++){
        if(meet[i].start>finish_time){
            finish_time = meet[i].end;
            ans.push_back(meet[i].pos);
        }
    }
    return ans;
 
}
