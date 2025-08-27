class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxd=0,maxa=0;
        for(auto i:dimensions){
            int d=(i[0]*i[0])+(i[1]*i[1]);
            int area=i[0]*i[1];
            if(d>maxd){
                maxd=d;
                maxa=area;
            }
            else if(d==maxd){
                maxa=max(area,maxa);
            }
        }
        return maxa;
    }
};