class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        int count=0;
        for(int i=0 ; i<tokens.size();i++){
            if(power>=tokens[i]){
                count++;
            }
        }
        return count;
    }
};