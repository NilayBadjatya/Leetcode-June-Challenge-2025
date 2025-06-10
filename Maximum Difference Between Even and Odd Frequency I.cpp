// BRUTE FORCE

class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (auto& ch : s) {
            mp[ch]++;
        }

        int maxDiff = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mp[s[i]] % 2 != 0 && mp[s[j]] % 2 == 0) {
                    maxDiff = max(maxDiff, mp[s[i]] - mp[s[j]]);
                }
            }
        }

        return maxDiff;
    }
};

// OPTIMAL APPROACH

class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(auto& ch : s){
            mp[ch]++;
        }

        int maxiOdd = INT_MIN, miniEven = INT_MAX;
        for(auto& x : mp){
            int f = x.second;
            if(f % 2 == 0){
                miniEven = min(miniEven, f);
            }else{
                maxiOdd = max(maxiOdd, f);
            }
        }

        return maxiOdd - miniEven;
    }
};
