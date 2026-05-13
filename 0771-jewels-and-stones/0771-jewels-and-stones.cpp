class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> setJ(jewels.begin(), jewels.end());
        
        int count = 0;
        
        for(char c : stones){
            if(setJ.count(c)){
                count++;
            }
        }
        
        return count;
    }
};