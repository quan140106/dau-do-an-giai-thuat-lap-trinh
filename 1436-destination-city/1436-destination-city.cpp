#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startCities;

        // lưu tất cả cityA
        for(auto &p : paths){
            startCities.insert(p[0]);
        }

        // tìm cityB không nằm trong startCities
        for(auto &p : paths){
            if(startCities.count(p[1]) == 0){
                return p[1];
            }
        }

        return "";
    }
};