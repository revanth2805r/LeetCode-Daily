class Solution {
public:
    vector<int> genrow(int row){
        int ans=1;
        vector<int> ansrow;
        amsrow.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a(numRows);
        for(int i=0; i<numRows; i++){
            a.push_back(genrow(i));                       
            }              
        }
        return a;
    }
};