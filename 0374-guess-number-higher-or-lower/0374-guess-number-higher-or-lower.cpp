/** 
 * Forward declaration of guess API.
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int l = 1;
        int r = n;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            int res = guess(mid);

            if (res == 0) {
                return mid;
            }

            if (res == 1) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        return -1;
    }
};