class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int count[26] = {0};

        for(char c : s){
            count[c - 'a']++;
        }

        int freq = 0;

        for(int i = 0; i < 26; i++){
            if(count[i] != 0){
                if(freq == 0) freq = count[i];
                else if(count[i] != freq) return false;
            }
        }

        return true;
    }
};