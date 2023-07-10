class Solution {
public:
    //comparator fun to sort the pair p in dec order of grow time

    static bool comp(pair < int , int > & p , pair < int , int > & q){
        return p.second > q.second;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();

        vector < pair < int , int > > p (n); //{plantTime , growTime};

        //storing it in p 
        for(int i = 0 ; i < n ; i++){
            p[i] = {plantTime[i] , growTime[i]};

        }
        
        //sort
        sort(p.begin() , p.end() , comp);
        int prePlantDays = 0;
        int maxBloomDays = 0;

        for(int i = 0 ; i < n ; i++){
            int currPlantTime = p[i].first;
            int currGrowTime  = p[i].second;
            // adding the plant time of ith seed to the plant times of preceeding seeds 
            // it would take prev_plant_time amount of time to actually plant the ith seed
            prePlantDays += currPlantTime;
            // bloom time of ith seed = total plant time of ith seed + grow time of ith seed + 1 
            // (as the flower blooms after last day of it's growth)
            int Bloom = prePlantDays + currGrowTime;
            maxBloomDays = max(maxBloomDays, Bloom);

        }
        return maxBloomDays;
    }
};
