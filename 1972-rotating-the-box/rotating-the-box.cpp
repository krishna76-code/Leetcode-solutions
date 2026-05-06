class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        
        for (int i = 0; i < m; i++) {
            int emptySlot = n - 1; 
            
            for (int j = n - 1; j >= 0; j--) {
                if (box[i][j] == '*') {
                    emptySlot = j - 1;


                } else if (box[i][j] == '#') {
                    box[i][j] = '.'; 
                    box[i][emptySlot] = '#'; 
                    emptySlot--; 
                }
            }
        }
        
        vector<vector<char>> res(n, vector<char>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[j][m - 1 - i] = box[i][j];
            }
        }
        
        return res;
    }
};