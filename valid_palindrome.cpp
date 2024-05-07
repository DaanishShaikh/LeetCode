bool isNumeric(char s){
    if(s=='0'||s=='1'||s=='2'||s=='3'||s=='4'||s=='5'||s=='6'||s=='7'||s=='8'||s=='9'||s=='10'){
        return 1;
    }
    else {
        return 0;
    }
}
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>ans;
        for(int i=0 ; i<s.size() ; i++){
            if(isalpha(s[i])||isNumeric(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        for(int i=0,k=ans.size()-1 ; i<=k ; i++,k--){
            if(ans[i]!=ans[k]){
                return false;
            }
        }
        return true;
    }
};