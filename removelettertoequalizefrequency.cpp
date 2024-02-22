#include<iostream>
#include<string>
using namespace std;
int main(){
    cin>>word;
    int l=word.length();
    // cout<<l;
    int count=0;
    for(int i=0 ; i<l ; i++){
        for(int j=0 ; j<l ; j++){
            // cout<<i<<j;
            if(i==j){
                continue;
            }
            if(word[i]==word[j]){
                count++;
                word[i]='.';
                word[j]='-';
                // cout<<s[i]<<s[j];
                // cout<<"count="<<count;
            }
        }
    }
    if(count==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
    }
}