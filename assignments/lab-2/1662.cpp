class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string g1, g2;
        for(int i=0; i<word1.size();i++)
        g1 += word1[i];

        for(int i=0; i<word2.size();i++)
        g2 += word2[i];

        if(g1 == g2)
        return true;

        return false;
    }
};