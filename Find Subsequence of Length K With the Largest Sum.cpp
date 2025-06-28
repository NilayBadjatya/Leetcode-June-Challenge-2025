typedef pair<int, int> P;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<P, vector<P>, greater<P>> pq;
        for(int i = 0; i < n; i++){
            pq.push({nums[i], i});
            if(pq.size() > k){
                pq.pop();
            }
        }
        vector<int> ans;
        vector<int> temp(n, -1e9);
        while(!pq.empty()){
            int val = pq.top().first;
            int idx = pq.top().second;
            temp[idx] = val;
            pq.pop();
        }
        for(int i = 0; i < n; i++){
            if(temp[i] != -1e9){
                ans.push_back(temp[i]);
            }
        }
        return ans;
    }
};
