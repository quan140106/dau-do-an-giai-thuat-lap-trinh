class Solution {
public:
    int minimumSum(int num) {
        vector<int> a;
        
        // tách từng chữ số
        while(num) {
            a.push_back(num % 10);
            num /= 10;
        }
        
        sort(a.begin(), a.end()); // sắp xếp tăng dần
        
        // ghép số nhỏ nhất
        int x = a[0]*10 + a[2];
        int y = a[1]*10 + a[3];
        
        return x + y;
    }
};