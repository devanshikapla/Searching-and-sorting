#include <bits/stdc++.h> 

bool comp(pair < int , int > a , pair < int , int > b){
    double rate1 = (double)a.second/a.first;
    double rate2 = (double)b.second/b.first;
    return rate1 > rate2;

}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin() , items.end() , comp);
    double res = 0;

    for(int i = 0 ; i < n ; i++){
        if(items[i].first <= w){
            res = res + items[i].second;
            w = w - items[i].first;
        }
        else{
            res = res + (items[i].second * ((double) w/items[i].first));
            break;
        }
    }
    return res;
}
