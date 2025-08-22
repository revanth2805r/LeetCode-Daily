class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int minr=n,maxr=-1,minc=m,maxc=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    minr=min(minr,i);
                    maxr=max(maxr,i);
                    minc=min(minc,j);
                    maxc=max(maxc,j);
                }
            }
        }
        return (maxr-minr+1)*(maxc-minc+1);
    }
};