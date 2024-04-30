#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
int count=0;
        for(int x=0 ; x<=n ; x++){
            for(int y=0 ; y<=n ; y++){
                if(x!=0 && y!=0 && x+2*y==n){
                    count+=2;
                    cout<<x<<' '<<y<<endl;
                }
                else if(x+2*y==n){
                    count++;
                    cout<<x<<' '<<y<<endl;
                }                
            }
        }
    return 0;
}