lass Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int nrow = matrix.size();
        int ncol = matrix[0].size();
        int l_wall = -1, r_wall = ncol, u_wall = 0, d_wall = nrow;
        char direction = 'r';
        vector<int> result;
        int i = 0, j = 0;
        while(result.size() < nrow * ncol) {
            result.push_back(matrix[i][j]);
            if(direction == 'r') {
                j++;
                if(j == r_wall) {
                    r_wall--;
                    j = r_wall;
                    direction = 'd';
                    i++;
                }
            }
            else if(direction == 'd') {
                i++;
                if(i == d_wall) {
                    d_wall--;
                    i = d_wall;
                    direction = 'l';
                    j--;
                }
            }
            else if(direction == 'l') {
                j--;
                if(j == l_wall) {
                    l_wall++;
                    j = l_wall;
                    direction = 'u';
                    i--;
                }
            }
            else if(direction == 'u') {
                i--;
                if(i == u_wall) {
                    u_wall++;
                    i = u_wall;
                    direction = 'r';
                    j++;
                }
            }
        }
        return result;
    }
};