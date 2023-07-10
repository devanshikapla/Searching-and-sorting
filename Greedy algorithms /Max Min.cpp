class Solution
{
   public:
    int findSum(int A[], int n)
    {
    	//code here.
    	int mini = INT_MAX;
    	for(int i = 0 ; i < n ; i++){
    	    if(A[i] < mini){
    	        mini = A[i];
    	    }
    	}
    	int maxi = INT_MIN;
    	for(int i = 0 ; i < n ; i++){
    	    if(A[i] > maxi) maxi = A[i];
    	}
    	return maxi + mini;
    }

};
