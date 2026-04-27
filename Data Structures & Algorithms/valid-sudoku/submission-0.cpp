class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> box[9],col[9],row[9];

        for (int r = 0; r< 9 ; r++){
            for (int c = 0; c<9 ; c++){

                if (board[r][c] == '.'){
                    continue;
                }
                if (row[r].count(board[r][c] - '0') || col[c].count(board[r][c] - '0') ||  box[(r/3)*3 + (c/3)].count(board[r][c] - '0')){
                    return false;
                }
                row[r].insert(board[r][c] - '0');
                col[c].insert(board[r][c] - '0');
                box[(r/3)*3 + (c/3)].insert(board[r][c] - '0');
                
            }
        }

        return true;
    }
};
