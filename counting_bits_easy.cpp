class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> result(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            int count = 0, x = i;
            while (x > 0) {
                if (x % 2 == 1)
                {
                    count++;
                }  
                x = x / 2;                
            }
            result[i] = count;
        }
        return result;
        }
};
