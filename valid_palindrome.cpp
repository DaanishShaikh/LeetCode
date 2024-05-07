#include<bits/stdc++.h>
using namespace std;
int main(){
    
    cin.ignore();
    string s;
    getline(cin,s);
    
vector<char>ans;
        for(int i=0 ; i<s.size() ; i++){
            if(isalpha(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i];
        }
        cout<<endl;
        queue<char>q;
        int temp=ans.size()/2;
        for(int i=0 ; i<ans.size()/2 ; i++){
            q.push(ans[i]);
        }
        for(int i=(ans.size()/2)+1 ; i<ans.size() ; i++){
            if(ans[i]==q.front()){
                q.pop();
            }
        }
        cout<<q.size()<<endl;
        if(q.size()){
            cout<<"false"<<endl;
        } else {
            cout<<"true"<<endl;
        }
        return 0;
}