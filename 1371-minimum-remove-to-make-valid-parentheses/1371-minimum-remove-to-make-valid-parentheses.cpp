class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        vector<bool> invalid(s.size(),false);

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()) st.pop();
                else invalid[i]=true;
            }
        }

        while(!st.empty()){
            invalid[st.top()]=true;
            st.pop();
        }
        
        string ans;
        for(int i=0;i<s.size();i++){
            if(!invalid[i]) ans+=s[i];
        }
        return ans;
    }
};