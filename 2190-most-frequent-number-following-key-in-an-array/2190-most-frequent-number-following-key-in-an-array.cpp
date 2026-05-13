class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int cnt[1001] = {0};
        int ans = 0, mx = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                cnt[nums[i + 1]]++;
                if (cnt[nums[i + 1]] > mx) {
                    mx = cnt[nums[i + 1]];
                    ans = nums[i + 1];
                }
            }
        }

        return ans;
    }
};