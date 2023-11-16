class Solution {
public:
    void dfs(vector<vector<char>> &board,int row,int col,vector<vector<int>> &visited){
        visited[row][col]=1;
        vector<int> delRow={0,1,0,-1};
        vector<int> delCol={1,0,-1,0};
        for(int i=0;i<4;i++){
            int newRow=row+delRow[i];
            int newCol=col+delCol[i];
            if(newRow>=0 && newCol>=0 && newRow<board.size() && newCol<board[0].size() && !visited[newRow][newCol] && board[newRow][newCol]=='O'){
                dfs(board,newRow,newCol,visited);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> visited(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            if(!visited[i][0] && board[i][0]=='O'){
                dfs(board,i,0,visited);
            }
            if(!visited[i][n-1] && board[i][n-1]=='O'){
                dfs(board,i,n-1,visited);
            }
        }
        for(int j=0;j<n;j++){
            if(!visited[0][j] && board[0][j]=='O'){
                dfs(board,0,j,visited);
            }
            if(!visited[m-1][j] && board[m-1][j]=='O'){
                dfs(board,m-1,j,visited);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};