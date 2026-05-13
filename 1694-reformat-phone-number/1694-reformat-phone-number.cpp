class Solution {
public:
    string reformatNumber(string number) {
        string digits = "";

        // Bước 1: loại bỏ space và dash
        for(char c : number){
            if(isdigit(c)) digits += c;
        }

        string result = "";
        int i = 0, n = digits.size();

        while(n - i > 4){
            result += digits.substr(i,3) + "-";
            i += 3;
        }

        if(n - i == 4){
            result += digits.substr(i,2) + "-" + digits.substr(i+2,2);
        }
        else{
            result += digits.substr(i);
        }

        return result;
    }
};