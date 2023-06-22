class Solution {
  public:
  int sumcount(vector<int>& nums, int mid){
      int sum=0;
      for(int i=0; i<nums.size(); i++){
          sum+=nums[i]/mid+((nums[i]%mid)!=0);
      }
      return sum;
  }
  
    int smallestDivisor(vector<int>& nums, int k) {
        int s=1,e=*max_element(nums.begin(), nums.end()), ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(sumcount(nums, mid)<=k){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
