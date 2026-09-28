class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi = 0;
        for(char c : s){
            if(c == '('){
                st.push(c);
            }
            else if(c == ')'){
                int size = st.size();
                st.pop();
                maxi = max(size, maxi);
            }
            else{
                
            }
        }
        return maxi;
    }
};