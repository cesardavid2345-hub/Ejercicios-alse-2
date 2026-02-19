class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long invertido = 0;
        int original = x;

        while (x != 0) {
            int digito = x % 10;
            invertido = invertido * 10 + digito;
            x /= 10;
        }

        return original == invertido;
    }
};
