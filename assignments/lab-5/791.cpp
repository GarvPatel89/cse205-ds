class Solution {
public:
    string customSortString(string order, string s) {
        for(int i=order.size()-1;i>=0;i--){
           int n=count(s.begin(), s.end(), order[i]);
           s.erase(remove(s.begin(), s.end(), order[i]), s.end());
           s.insert(0,n,order[i]);
        }
        return s;
    }
};