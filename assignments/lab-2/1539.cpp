class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans=1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] != ans){
                k--;
                --i;
            }
            if(k==0)
            return ans;
            ans++;
        }
        while(k>1){
            ans++;
            k--;
        }
        return ans;
    }
};