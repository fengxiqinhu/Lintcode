//------------------------尾部的零------------------------------

class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        long long i = 0;
        while((n /= 5) != 0)
            i += n;
        return i;
    }
};