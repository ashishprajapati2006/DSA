class Solution {
public:
    int climbStairs(int n) {

        if(n == 1 || n == 2)
            return n;

        int curr = 0;
        int last = 1;
        int prev = 2;

        for(int i = 3; i <= n; i++) {
            curr = prev + last;
            last = prev;
            prev = curr;
        }

        return curr;
    }
};