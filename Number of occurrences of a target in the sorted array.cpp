#include <bits/stdc++.h>
int countOccurrences(vector < int > nums, int target) {
        int n = nums.size();
        vector < int > ans;
        int start = 0;
        int end = n - 1;
        int first = -1;
        int last = -1;
        while(start <= end){
            int mid = (start + (end - start)/2);
            if(nums[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        ans.push_back(first);
       
        start = 0;
        end = n - 1;
        while(start <= end){
            int mid = (start + (end - start)/2);
            if(nums[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        ans.push_back(last);
        if(ans[0] == -1 and ans[ans.size() - 1] == -1) return 0;
        return ans[ans.size() - 1] - ans[0] + 1;

}
