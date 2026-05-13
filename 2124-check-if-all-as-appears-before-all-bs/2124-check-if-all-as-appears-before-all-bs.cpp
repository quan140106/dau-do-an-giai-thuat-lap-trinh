class Solution {
public:
    bool checkString(string s) {
        bool timb = false;
        for(char c:s){
            if( c=='b')
                timb = true;
            if( c=='a' && timb)
                return false;
        }
        return true;
    }
};