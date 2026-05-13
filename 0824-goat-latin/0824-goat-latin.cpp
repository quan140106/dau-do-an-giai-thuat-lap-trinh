class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result;
        int index = 1;

        while (ss >> word) {
            char c = tolower(word[0]);

            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
                word += "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }

            word += string(index, 'a');

            if (!result.empty()) result += " ";
            result += word;

            index++;
        }

        return result;
    }
};