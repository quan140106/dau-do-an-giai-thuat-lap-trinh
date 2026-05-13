class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;//độ dài khác nhau thì false luôn

        int cnt[26] = {0};
        for (char c : s) cnt[c - 'a']++; //tăng s
        for (char c : t)
            if (--cnt[c - 'a'] < 0) return false; // giảm t / mếu t<0 false
        return true;
    }
};