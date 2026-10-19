class Solution {
public:

set<pair<int,int>> s;

    bool rec(vector<vector<char>>& boad, string word, int i, int r, int c) {
        
        if(i==word.length()) {
            return true;
        }

        if(r >= boad.size() || r < 0 || c < 0 || c >= boad[0].size() || boad[r][c] != word[i] || s.count({r,c})) {
            return false;
        }


        s.insert({r,c});
        bool res = rec(boad, word, i+1, r-1, c) || rec(boad, word, i+1, r, c+1) || rec(boad, word, i+1, r+1, c) || rec(boad, word, i+1, r, c-1) ;
        s.erase({r,c});
        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        for(int r=0; r<row; r++) {
            for(int c=0; c<col; c++) {
                if(rec(board, word, 0, r,c)) {
                    return true;
                }
            }
        }
        return false;
    }
};
