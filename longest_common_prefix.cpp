#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minsize = INT_MAX;
        for (int i = 0; i < strs.size(); i++) {
            minsize = min(minsize, (int)strs[i].size());
        }
        
        string ans = "";
        for (int i = 0; i < minsize; i++) {
            char current = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != current) {
                    return ans;
                }
            }
            ans.push_back(current);
        }
        return ans;
    }
};
