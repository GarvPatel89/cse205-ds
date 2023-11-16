class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    int rowSet[9][9] = {0};
    int colSet[9][9] = {0};
    int subSet[9][9] = {0};
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j] != '.'){
                int num = board[i][j] - '0';
                int subnum = (i/3)*3 + j/3;
                if(rowSet[i][num-1]++ || colSet[j][num-1]++ || subSet[subnum][num-1]++)
                return false;
            }
        }
    }
    return true;
    }
};