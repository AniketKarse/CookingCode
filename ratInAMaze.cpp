class Solution {
  private:
    void backtrack(int r, int c, int n, string& path, vector<string>& ans,vector<vector<int>>& maze){
        if(r == n-1 && c == n-1){
            ans.push_back(path);
            return;
        }
        
        maze[r][c] = 0;
        
        int dr[] = {1, 0, 0, -1};
        int dc[] = {0, -1, 1, 0};
        char dir[] = {'D', 'L', 'R', 'U'};
        
        for(int i=0;i<4;i++){
            int next_r = r + dr[i];
            int next_c = c + dc[i];
            
            if(next_r >= 0 && next_r < n && next_c >= 0 && next_c < n && maze[next_r][next_c] == 1){
                path.push_back(dir[i]);
                backtrack(next_r,next_c,n,path,ans,maze);
                path.pop_back();
            }
        }
        maze[r][c] = 1;
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
       int n = maze.size();
       vector<string> ans;
       string path = "";
       
       if(maze[0][0] == 0 || maze[n-1][n-1] == 0) return ans;
       backtrack(0,0,n,path,ans,maze);
       return ans;
    }
};
