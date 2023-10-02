class Solution {
public:
    int minimumBuckets(string hamsters) {
        //Greedy 
        
        //H . . H H is hamster and . is a food bucket
        //.H.H. 2 buckets but minimum buckets would be 1 that is the central bucket.
        // If I encouter an H I should place bucket on i + 1 index provided i + 1 is empty. There is no need to put the bucket on i - 1 th index as i - 1 wouldn't result into minimum number of buckets.
        // if i + 1 is not empty then only options is place of left side. provided i - 1 is a '.' . if string = HH. or HHH. return -1 as there is no way to place buckets.
        
        int ans = 0;
        int n = hamsters.size();
        for(int i = 0 ; i < n ; ){
            if(hamsters[i] == 'H'){
                if(i + 1 < n && hamsters[i + 1] == '.'){
                    ans++;
                    i = i + 3;
                    continue;
                }
                if(i - 1 >= 0 && hamsters[i - 1] == '.'){
                    ans++;
                    i++;
                    continue;
                }
                return -1;
            }
            i++;
        }
        return ans;
    }
};
