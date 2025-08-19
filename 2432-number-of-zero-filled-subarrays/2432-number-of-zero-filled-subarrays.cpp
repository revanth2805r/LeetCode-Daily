class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0,s=0;
        for(auto i:nums){
            if(i==0){
                s++;
                c+=s;
            }
            else s=0;
        }
        return c;
    }
};