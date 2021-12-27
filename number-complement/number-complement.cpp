class Solution {
public:
    int findComplement(int num) {
        int bits = 0, n = num;
        while(n > 0) {
            bits++;
            n >>= 1;
        }
        return (num ^ ((1L << bits) - 1));

    }
};