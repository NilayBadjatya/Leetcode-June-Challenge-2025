class Solution {
public:

    int Count(long curr, long next, long n){
        long ans = 0;
        while(curr <= n){
            ans += (next - curr);
            curr *= 10;
            next *= 10;
            next = min(next, (long)n+1);
        }
        return ans;
    }

    int findKthNumber(int n, int k) {
        int curr = 1;
        k--;
        while(k > 0){
            int count = Count(curr, curr+1, n);
            if(count > k){
                curr*= 10;
                k--;
            }else if(count <= k){
                curr++;
                k -= count;
            }
        }
        return curr;
    }
};

// JAVA CODE

class Solution {

    int Count(long curr, long next, long n){
        long ans = 0;
        while(curr <= n){
            ans += (next - curr);
            curr *= 10;
            next *= 10;
            next = Math.min(next, n+1);
        }
        return (int)ans;
    }

    public int findKthNumber(int n, int k) {
        int curr = 1;
        k--;
        while(k > 0){
            int count = Count(curr, curr+1, n);
            if(count <= k){
                curr++;
                k -= count;
            }else{
                curr *= 10;
                k--;
            }
        }
        return curr;
    }
}
