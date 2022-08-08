class Solution {
public:
    bool isCyclic(vector<vector<int>>& adj, vector<int>& visited,int v){
        if(visited[v]==2)
            return true;
        
        //processinf current vertex
        visited[v]=2;
        for(int i=0;i<adj[v].size();i++){
            if(visited[adj[v][i]]!=1)
                if(isCyclic(adj,visited,adj[v][i]))
                    return true;
        }
        
        visited[v]=1; //processed the vertex
        return false;
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int> visited(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(visited[i]==0){
                if(isCyclic(adj,visited,i))
                    return false;
            }
        }
        return true;
        
    }
};