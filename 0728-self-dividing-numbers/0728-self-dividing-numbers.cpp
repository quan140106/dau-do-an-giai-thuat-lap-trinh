class Solution {
public:
    bool check(int num) {
        int x = num;

        while (x > 0) {
            int digit = x % 10;

            if (digit == 0 || num % digit != 0) {
                return false;
            }

            x /= 10;
        }

        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            if (check(i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};