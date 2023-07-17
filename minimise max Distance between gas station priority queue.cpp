#include <bits/stdc++.h>
long double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	int n = arr.size();
	vector < int > howMany( n - 1 , 0);
	priority_queue < pair < long double , int >> pq;
	for(int i = 0 ; i < n - 1; i++){
		pq.push({arr[i + 1] - arr[i] , i});
	}
	for(int gas = 1 ; gas <= k ; gas++){
		auto tp = pq.top();
		pq.pop();
		int sec = tp.second;
		howMany[sec]++;
		long double intDiff = arr[sec + 1] - arr[sec];

		long double newSecLen = intDiff / (long double)(howMany[sec] + 1);
		pq.push({newSecLen , sec});
	}	
	return pq.top().first;
}
