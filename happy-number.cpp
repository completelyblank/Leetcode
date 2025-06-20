class Solution {
public:
    int getSumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> seen;

    while (n != 1) {
        if (seen.count(n))
            return false; // loop detected
        seen.insert(n);
        n = getSumOfSquares(n);
    }

    return true;
}
};
