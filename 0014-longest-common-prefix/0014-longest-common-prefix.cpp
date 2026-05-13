class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";//ktra rỗng

        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i]; //lấy i[0] đầu làm mốc
            for (int j = 1; j < strs.size(); j++)//so sánh cùng vị trí i ở các chuỗi
                if (i >= strs[j].size() || strs[j][i] != c)//chuỗi sau ngắn hoặc có ktu khác
                    return strs[0].substr(0, i);//trả về các kí tự giống nhau từ 0 -> i-1
        }
        return strs[0];
    }
};