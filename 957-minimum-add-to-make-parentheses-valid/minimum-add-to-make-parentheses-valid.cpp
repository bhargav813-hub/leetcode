class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st;
        int right = 0;
       for(char c : s){
        if( c == '('){
            st.push(c);
        }
        else if(!(st.empty()) && c == ')'){
            st.pop();
        }
        else if( c == ')'){
            right++;
        }
       }
       return (st.size() + right);
    }
};