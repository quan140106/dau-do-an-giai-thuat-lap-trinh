class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {//duyệt s
            if (s[i] == t[j]) i++;//duyệt t
            j++;//t == s thì tăng s
        }
        return i == s.size();//kết thúc khi duyệt hết s
    }
};