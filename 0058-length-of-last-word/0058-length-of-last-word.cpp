class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') i--;//bỏ khoảng trống sau
        while (i >= 0 && s[i] != ' ') {// cộng vào count khi có kí tự, dừng khi khoảng trốmg
            count++;
            i--; //giảm i ( đếm từ sau lên đầu)
        }

        return count;
    }
};