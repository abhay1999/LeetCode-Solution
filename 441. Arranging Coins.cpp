class Solution {
public:
    int arrangeCoins(long n) {
        return 0.5 *(sqrt(8*n + 1) - 1);
    }
};
