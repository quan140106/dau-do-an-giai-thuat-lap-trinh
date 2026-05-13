class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt[26] = {0};

        for (char c : magazine)
            cnt[c - 'a']++;//đếm số lượng từng kí tự

        for (char c : ransomNote) {//nếu trong rN có ki tự đó thì giảm số lượng
            if (--cnt[c - 'a'] < 0)//nếu số lượng <0 = hết kí tự =false
                return false;
        }
        return true;
    }
};