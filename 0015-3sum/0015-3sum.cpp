class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    st.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]>0){
                    r--;
                }
                else l++;
            }
        }
        return vector<vector<int>> (st.begin(),st.end());
    }
};