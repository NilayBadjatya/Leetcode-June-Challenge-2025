class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();

        int ans = 0;
        for(auto& x : s){
            if(x == '0'){
                ans++;
            }
        }
        int sum = 0;
        for(int i = n-1; i >= 0 && (n - i - 1) < 31; i--){
            if(s[i] == '1'){
                if(sum + (1 << (n - i - 1)) > k){
                    break;
                }
                sum += (1 << (n - i - 1));
                ans++;
            }
        }
        return ans;
    }
};
