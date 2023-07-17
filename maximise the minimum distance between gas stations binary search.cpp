int numberOFGas(long double dist , vector < int > & arr){
	int cnt = 0;
	for(int i = 1; i < arr.size() ; i++){
		int numberInBet = ((arr[i] - arr[i - 1]) / dist);
		if((arr[i] - arr[i - 1]) / dist == numberInBet * dist){
			numberInBet--;
		}
		cnt += numberInBet;
	}
	return cnt;
}
long double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.	
	int n = arr.size();
	long double low = 0;
	long double high = 0;
	for(int i = 0 ; i < n - 1; i++){
		high = max(high , (long double)(arr[i + 1] - arr[i]));
	}
	long double diff = 1e-6;
	while(high - low > diff){
		long double mid = (low + high) / (2.0);
		int cnt = numberOFGas(mid , arr);
		if(cnt > k){
			low = mid;
		}
		else{
			high = mid;
		}
		
	}
	return high;
}
