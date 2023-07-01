 int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr , arr + n);
    	sort(dep , dep + n);
    	int platform = 1;
    	int result = 1;
    	int i = 1; 
    	int j = 0;
    	while(i < n && j < n){
    	    if(arr[i] <= dep[j]){
    	        platform++;
    	        i++;
    	    }
    	    else if(arr[i] = dep[j]){
    	        platform--;
    	        j++;
    	    }
    	    if(platform > result) {
    	        result = platform;
    	    }
    	}
    	return result;
    }
