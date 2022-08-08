class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int maxDrop=0;
        for(int i=0;i<trips.size();i++){
            if(trips[i][2]>maxDrop)
                maxDrop=trips[i][2];
        }
        vector<int>timestamp(maxDrop+1,0);
        for(int i=0;i<trips.size();i++){
            timestamp[trips[i][1]] +=trips[i][0];
            timestamp[trips[i][2]] -=trips[i][0];
        }
        for(int i=0;i<=maxDrop;i++){
            capacity -=timestamp[i];
            if(capacity<0)
                return false;
        }
        return true;
        
    }
};