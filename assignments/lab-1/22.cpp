class Solution {
public:
    void printParenthesis(int ind, vector<string> &g, int n, int open, int close, string &s){
        if(ind == n){
            g.push_back(s);
            return;
        }
        if(open > 0 && ind != n-1){
            s += "(";
            printParenthesis(ind+1, g, n, open-1, close, s);
            s.pop_back();
        }
        if(close > 0 && open < close){
            s += ")";
            printParenthesis(ind+1, g, n, open, close-1, s);
            s.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> g;
        int open = n-1;
        int close = n;
        n *= 2;
        string s = "(";

        printParenthesis(1, g, n, open, close, s);

        return g;
    }
};