class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int cnt[501] = {0};

        // Đếm số lần xuất hiện
        for (int x : nums) {
            cnt[x]++;
        }

        // Kiểm tra chẵn/lẻ
        for (int i = 1; i <= 500; i++) {
            if (cnt[i] % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};