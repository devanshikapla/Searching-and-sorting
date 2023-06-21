class Solution {
  public:
    int check(int mid , vector<int>& piles){
        int sum = 0;
        for(int i = 0 ; i < piles.size() ; i++){
            sum += (piles[i] / mid) + (piles[i] % mid != 0);
        }
        return sum;
    }
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int ans = 0;
        int end = *max_element(piles.begin() , piles.end());
        int start = 1;
        while(start <= end){
            int mid = (start + (-start + end)/2);
            int time = check(mid , piles);
            if(time <= H){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};
