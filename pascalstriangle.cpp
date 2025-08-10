class Solution {
public:
    vector<int> genrow(int row) {
        long long ans = 1; 
        vector<int> ansrow;
        ansrow.push_back(1);

        for (int col = 1; col <= row; col++) {
            ans = ans * (row - col + 1);
            ans = ans / col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for (int i = 0; i < numRows; i++) {
            a.push_back(genrow(i));
        }
        return a;
    }
};
