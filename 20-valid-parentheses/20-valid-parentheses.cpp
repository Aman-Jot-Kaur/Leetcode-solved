class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      if(s.length()<=1){
        return false;
      }
        for(auto ch:s){
          if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
          }
          else{
            if(!st.empty() && ((ch=='}'&& st.top()=='{') || (ch==')'&& st.top()=='(') || (ch==']'&& st.top()=='['))){
            st.pop();
          }
            else{
              return false;
            }
          }
        }
      if(st.empty()){
        return true;
      }
      else{
        return false;
      }
    }
};