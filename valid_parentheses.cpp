#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        stack<int>st;
        for(char c : s){
            if(c=='('||c=='['||c=='{'){
                st.push(c);
            } else {
                if(st.empty()){
                    return false;
                }
                if(st.top()=='(' && c!=')'){
                    return false;
                }
                if(st.top()=='[' && c!=']'){
                    return false;
                }
                if(st.top()=='{' && c!='}'){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
