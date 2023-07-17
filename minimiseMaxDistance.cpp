long double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	int n = arr.size();
	vector < int > howMany( n - 1 , 0);
	for(int gas = 1 ; gas <= k ; gas++){
		int maxInd = -1;
		long double  maxSection = -1;
		for(int i = 0 ; i < n - 1; i++){
			long double diff = arr[i + 1] - arr[i];
			long double SectionLen = diff/ (long double)(howMany[i] + 1);
			if(SectionLen > maxSection){
				maxSection = SectionLen;
				maxInd = i;
			}
		}
		howMany[maxInd]++;
	}	
	long double maxAns = -1;
	for(int i = 0 ; i < n - 1; i++){
		long double diff = arr[i + 1] - arr[i];
		long double SectionLen = diff / (long double) (howMany[i] + 1);
		maxAns = max(maxAns , SectionLen);
	}
	return maxAns;

}
