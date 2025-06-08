class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> a;
        for(int i = 1; i <= n; i++){
            string s = to_string(i);
            a.push_back(s);
        }
        sort(a.begin(), a.end());
        vector<int> ans;
        for(auto& s : a){
            int x = stoi(s);
            ans.push_back(x);
        }
        return ans;
    }
};
