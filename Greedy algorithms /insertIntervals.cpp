class Solution {
public:
/*
    intervals are sorted in ascending order of the starting time , we have to insert a new Interval into the vector of vector of intervals and starting points remain in the ascending order sorted. 
    1 ------------ 3 6 -------------- 9
    as 2 is overlapping in 1 -------------- 3 so merge 1 ------------ 5

    new[0] = min(starting point of A , starting Point of B) = 1

    new[1] = max(A.end () , B.end()) = 5
*/

/*
    Brute force :- (1,2) , (3,5) , (6,7) , (8, 10) , (12,15)

    1---------------- 2 4 ----------------- 8 both of them cant be merged so move forward 
    3 --------------- 5 4 ----------------- 8 this can be merged new interval = 3 ------------------ 8 

    Remove 3 ------------- 5

    new array = (1,2) , (6,7) , (8,10) , (12,16)

    for(int i = 0 ; i < intervals.size() ; i++) as size of intervals vector keep on changing

    update new interval to (3,8)

    6 --------------- 7 3 ---------------- 8 this can be merged and new interval = 3 ---------- 8
    remove (6, 7) and new array becomes (1,2), (8,10) , (12,16)

    3 ---------- 8 8 ------- 10 merge 3 -------- 10 new array (1,2),(12,16)


    3,10 and 12,16 can't be merged so these can't be merged

    ending point < new intervals starting point move forward

    if starting point > new intervals starting point then update the interval/insert new interval 

    return;

    merge the interval  and erase ith interval

    return result;

*/

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector < vector < int >> ans;

        int i = 0;

        while(i < intervals.size()){
            if(intervals[i][1] < newInterval[0]) i++;

            else if(intervals[i][0] > newInterval[1]) {intervals.insert(intervals.begin() + i , newInterval );
            return intervals;
            }
            else{
                //merge
                newInterval[0] = min(newInterval[0] , intervals[i][0]);
                newInterval[1] = max(newInterval[1] , intervals[i][1]);

                intervals.erase(intervals.begin() + i);
            }
        
        }
        intervals.push_back(newInterval);
        return intervals;
    }
};
