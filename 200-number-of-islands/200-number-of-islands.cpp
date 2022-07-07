class Solution {
public:
    void mark_new_island(vector<vector<char>>& grid, int x, int y, int m, int n){
        if(x<0 || x>=m || y<0 || y>=n || grid[x][y]!='1')
            return;
        
        grid[x][y] = '2';
        
        mark_new_island(grid,x+1,y,m,n);
        mark_new_island(grid, x-1,y,m,n);
        mark_new_island(grid,x,y+1,m,n);
        mark_new_island(grid,x,y-1,m,n);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int number_of_islands =0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    mark_new_island(grid,i,j,m,n);
                    number_of_islands++;
                }
            }
        }
        return number_of_islands;
    }
};