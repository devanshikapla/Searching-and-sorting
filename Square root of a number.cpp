int floorSqrt(int n)
{
    // Write your code here.
    int low = 0;
    int high = n;
    long long int ans = 0;
    while(low <= high){
        long long int mid = (low + (-low + high)/2);
        if(mid * mid == n){
            return mid;
        }
        if(mid * mid < n ){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;

        }
    }
    return ans;
}
