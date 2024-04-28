class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag=1;
        for(int i=0 ; i<digits.size() ; i++){
            if(digits[i]!=9){
            flag=0;
            }
        }
        if(flag){
            vector<int>ans;
            ans.push_back(1);
            for(int i=0 ; i<digits.size() ; i++){
                ans.push_back(0);
            }
            return ans;
        }
        else if(digits[digits.size()-1]>=0&&digits[digits.size()-1]<9){
        digits[digits.size()-1]++;
        return digits;
        } else {
            int i=digits.size()-1;
            while(digits[i]==9){
                digits[i]=0;
                i--;
            }
            digits[i]++;
        }
        return digits;
    }
};