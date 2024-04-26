#include<bits/stdc++.h>
using namespace std;
    void longestIdealString(string s, int k) {
        vector<char>ans;
        for(int i=1 ; i<s.size() ;i++){
            if(abs(s[i]-s[i-1])<=k){
                //donothing
            } else {
                if(s[i]>s[i-1]){
                s.erase(s.begin()+i);
                i--;
                } else if(s[i]<s[i-1]){
                    s.erase(s.begin()+i-1);
                        i--;
                }
            }
        }
        for(int i=0 ; i<s.size() ; i++){
            cout<<s[i]<<' ';
        }
        cout<<abs('j'-'x')<<endl;
    }
    int main(){
        string s;
        cin >> s;
        int k;
        cin >>k;
        longestIdealString(s,k);
        return 0;
    }