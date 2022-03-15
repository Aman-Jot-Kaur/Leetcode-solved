class Solution {
public:
   string minRemoveToMakeValid(string s) {
        stack<char> st;
        vector<char> ans;
        for(int i=0;i<s.size();++i){
            if(s[i]==')'){
            if(s[i]==')' && st.size()>0 && st.top()=='('){
                ans.push_back(s[i]);
                st.pop();
            }
            }
            else{
                if(s[i]=='('){
                    st.push(s[i]);
                }
                ans.push_back(s[i]);
            }
        }
        if(st.size()!=0){
            int c=st.size();
            for(int j=ans.size()-1;j>=0 && c>0;--j){
                if(ans[j]=='('){
                    ans.erase(ans.begin()+j);
                    c--;
                }
            }
        }
        string ans2(ans.begin(),ans.end());
        return ans2;
}
};