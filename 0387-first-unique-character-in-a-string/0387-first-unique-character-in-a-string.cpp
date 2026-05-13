class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};

        // Đếm số lần xuất hiện
        for(char c : s){
            count[c - 'a']++;
        }

        // Tìm ký tự xuất hiện 1 lần
        for(int i = 0; i < s.length(); i++){
            if(count[s[i] - 'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};