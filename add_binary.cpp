#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;

        int sum = 0;
        int twos = 1;
        for (int i = a.size() - 1; i >= 0; i--) {
            cout<<"sum="<<sum<<endl;
            if(a[i]=='1'){
            sum += 1 * twos;
            twos *= 2;
            } else if(a[i]=='0'){
            sum += 0 * twos;
            twos *= 2;
            }
        }
        twos = 1;
        for (int i = b.size() - 1; i >= 0; i--) {
            cout<<"sum="<<sum<<endl;
            if(b[i]=='1'){
            sum += 1 * twos;
            twos *= 2;
            } else if(b[i]=='0'){
                sum += 0 * twos;
                twos *= 2;
            }
        }
        vector<int> ans;
        while (sum) {
            ans.push_back(sum % 2);
            sum /= 2;
        }
        string stringans;
        for (int i = ans.size()-1; i>=0; i--) {
            if (ans[i] == 0) {
                stringans.push_back('0');
            } else {
                stringans.push_back('1');
            }
        }
        for(int i=0 ; i<stringans.size() ;i++){
            cout<<stringans[i];
        }
}