class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for (char c : s){
            if(!(65 <= c && c <= 90 || 97 <= c && c <= 122 || 48 <= c && c <= 57)){
                continue;
            }
            if (c < 97){
                c = 32 + c;
            }
            s2 += c;

        }

        cout << s2;
        
        int l = 0;
        int r = s2.size() - 1;
        while (r > l){

            if (s2[l] != s2[r]){
                return false;
            }
            l++;
            r--; 
        }  

        return true;
            
        
    }
};
