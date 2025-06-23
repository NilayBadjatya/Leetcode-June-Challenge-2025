class Solution {
public:
    string convertToBase(int number, int base) {
        if (base < 2 || base > 9) {
            return "Invalid base!";
        }

        if (number == 0){
            return "0";
        }

        string result = "";
        while (number > 0) {
            int remainder = number % base;
            result = char('0' + remainder) + result;
            number /= base;
        }
        return result;
    }

    bool isPalindrome(string& s){
        int i = 0, j = s.size()-1;
        while(i < j){
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }

    long long kMirror(int k, int n) {
        long long i = 1, sum = 0;
        while(n){
            string s = convertToBase(i, k);
            string s2 = to_string(i);
            if(isPalindrome(s) && isPalindrome(s2)){
                sum += i;
                n--;
            }
            i++;
        }
        return sum;
    }
};
