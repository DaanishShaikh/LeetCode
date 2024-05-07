vector<char>ans;
        for(int i=0 ; i<s.size() ; i++){
            if(isalpha(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }