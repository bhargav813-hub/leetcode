class Solution {
public:
    bool isValid(string s) {
        stack<char>m;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
            {
                m.push(s[i]);
            }
            else
            {
                if(m.empty()){
                    return false;
                }
            if(m.top()=='{'&&s[i]=='}'||m.top()=='('&&s[i]==')'||m.top()=='['&&s[i]==']')
            {
                m.pop();
            } 
            else
            {
                return false;
            }
            }
        }
      return (m.empty());
    }
};