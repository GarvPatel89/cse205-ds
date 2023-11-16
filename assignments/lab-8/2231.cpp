class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        for(int i=0; i<s.size()-1; ++i){
            for(int j=i+1; j<s.size(); ++j){
                if((s[i]-'0')%2 ==(s[j]-'0')%2 && s[i]<s[j]){
                    swap(s[i],s[j]);
                }else continue;
            }
        }
        return stoi(s);
    }
};