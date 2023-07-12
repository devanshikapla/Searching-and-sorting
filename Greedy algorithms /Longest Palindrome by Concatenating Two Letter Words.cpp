class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map < string , int > mpp;
        //adding all the strings in a map data structure;

        for(auto & it : words){
            mpp[it]++;
        }
        bool centerUsed = false; //for single frequency string;
        int res = 0;
        for(auto & it : words){
            string rev = it;
            reverse(rev.begin() , rev.end());
            if(rev != it){
                if(mpp[it] > 0 && mpp[rev] > 0){
                    mpp[it]--;
                    mpp[rev]--;
                    res += 4;
                }
            }
            else{
                if(mpp[it] >= 2){
                    mpp[it] -= 2;
                    res += 4;
                }
                else if(mpp[it] == 1 && centerUsed == false){
                    mpp[it]--;
                    res += 2;
                    centerUsed = true;
                }
            }
        }
        return res;
    }
};
