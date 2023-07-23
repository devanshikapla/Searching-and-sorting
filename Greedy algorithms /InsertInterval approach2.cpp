class Solution {
public:
/*
    result = {(1,2) , ()}
    3 ------------- 5 , 4 ------------- 8 mergable hence dont append anything to result and just update new interval to 3,8 do not del anything from intervals vector

    3 --------- 8 , 6 ------- 7 mergable so update it to 3 --------- 8

    (8,10) can also be merged to 3 ---- 8
    new interval ( 3, 10) next ith interval (12 , 16) 
    break from the loop and update result with 3,10 and add all the values from ith to end in intervals array

    1) intervals[i][1] < newIntervals[0]
    result = intervals[i]

    2) intervals[i][0] > new Intervals[i] break;

    merge simply


*/

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0;
        vector < vector < int> > result;
        int n = intervals.size();
        while(i < n){
            if(intervals[i][1] < newInterval[0]) result.push_back(intervals[i]);
            else if(intervals[i][0] > newInterval[1]){
                break;
            }
            else{
                newInterval[0] = min(newInterval[0] , intervals[i][0]);
                newInterval[1] = max(newInterval[1] , intervals[i][1]);
            }
            i++;
        }
        result.push_back(newInterval);
        while(i < n ){
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};
