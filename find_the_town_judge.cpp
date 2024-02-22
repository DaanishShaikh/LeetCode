class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        bool flag=true;
        int j=0;
        for(int i=0 ; i<trust.size(); i++){
            if(trust[i][0]>trust[i][1]){
                flag=false;
                j=i;
            }
            
        }
        if(flag){
        return (trust[j][1]);
        }
        else{return -1;}

    }
};