class Solution {
public:
    int maxDistance(string s1, int k1) {
        int n = s1.size();
        vector<string> dir = {"NW", "NE", "SE", "SW"};

        int ans = 0;
        for (auto& d : dir) {
            int x = 0, y = 0;
            string s = s1;
            int k = k1;
            for (int i = 0; i < n; i++) {
                if (s[i] != d[0] && s[i] != d[1]) {
                    if (k > 0) {
                        s[i] = d[0];
                        k--;
                    }
                }
                if (s[i] == 'N') {
                    y++;
                } else if (s[i] == 'S') {
                    y--;
                } else if (s[i] == 'W') {
                    x--;
                } else if (s[i] == 'E') {
                    x++;
                }
                ans = max(ans, abs(x) + abs(y));
            }
        }
        return ans;
    }
};
