class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<int> dp(text1.size(),0);
        int maxl=0;
        for(char ch : text2){
            int c=0;
            for(int i=0;i<dp.size();i++){
                if(c<dp[i]){
                    c=dp[i];
                }
                else if(ch==text1[i]){
                    dp[i]=c+1;
                    maxl=max(maxl,c+1);
                }
            }
        }
        return maxl;
    }
};