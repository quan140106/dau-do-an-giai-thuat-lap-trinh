class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        for (int i = 0; i < size; i++) {//duyệt chuỗi
            if (flowerbed[i] == 0) {//nếu [i]==0, ô trống
                bool leftEmpty  = (i == 0 || flowerbed[i - 1] == 0);//ktra bên trai/phải trống hoặc k tồn tại
                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1; // đặt [i]=1, trồng hoa và trừ số hoa còn lại
                    n--;
                }
            }
            if (n <= 0) return true;//trồng hết thì true
        }
        return false;
    }
};