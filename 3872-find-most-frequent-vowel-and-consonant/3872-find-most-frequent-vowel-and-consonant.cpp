class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> count(27,0);
        for(int i=0;i<s.size();i++){
            count[(int)s[i]-97]++;
        }
        int maxc=0,maxv=0;
        for(int i=0;i<=26;i++){
            if((char)(i+97)=='a'||(char)(i+97)=='e'||(char)(i+97)=='i'||(char)(i+97)=='o'||(char)(i+97)=='u') maxv=max(maxv,count[i]);
            else maxc=max(maxc,count[i]);
        }
        return maxc+maxv;
    }
};