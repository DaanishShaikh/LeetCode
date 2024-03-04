#include<bits/stdc++.h>
using namespace std;
int main(){
        int score=0;
        int count=0;
        int power;
        cin>>power;
        int n;
        cin>>n;
        vector<int>tokens(n);
        for (auto i = 0; i < n; i++)
        {
            cin>>tokens[i];
        }
        
        sort(tokens.begin(),tokens.end());
        for (auto i = 0; i < n; i++)
        {
            cout<<tokens[i]<<' ';
        }
        cout<<endl;
        for(int i=0, j=tokens.size()-1 ; i<=j;){
            cout<<"1 power="<<power<<"tokens["<<i<<"]="<<tokens[i]<<"scores="<<score<<"tokens["<<j<<"]="<<tokens[j]<<endl;

            if(power>=tokens[i]){
                score+=1;
                power-=tokens[i];
                                cout<<"2 power="<<power<<"tokens["<<i<<"]="<<tokens[i]<<"score="<<score<<endl;

                i++;
            }
            if(tokens.size()==2){break;}
            if(power<tokens[j]&&score==1){
                score-=1;
                power+=tokens[j];
                                cout<<"3 power="<<power<<"tokens["<<j<<"]="<<tokens[j]<<"score="<<score<<endl;

                j--;
            }
            if(i==j||i>j){break;}
        }
        cout<<score<<endl;
        return 0;
    }
    