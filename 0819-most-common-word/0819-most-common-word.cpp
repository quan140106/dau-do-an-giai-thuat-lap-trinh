class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> count;

        for(char &c : paragraph){
            if(isalpha(c)) 
                c = tolower(c);
            else 
                c = ' ';
        }

        stringstream ss(paragraph);
        string word;
        string ans;
        int maxFreq = 0;

        while(ss >> word){
            if(ban.count(word)) continue;
            
            count[word]++;
            if(count[word] > maxFreq){
                maxFreq = count[word];
                ans = word;
            }
        }

        return ans;
    }
};