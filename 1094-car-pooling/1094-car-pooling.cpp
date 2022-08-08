class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>timestamp(10001,0);
        for(int i=0;i<trips.size();i++){
            timestamp[trips[i][1]] +=trips[i][0];
            timestamp[trips[i][2]] -=trips[i][0];
        }
        for(int i=0;i<=1000;i++){
            capacity -=timestamp[i];
            if(capacity<0)
                return false;
        }
        return true;
    }
};