class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (const auto& s : strs){
            res = res + to_string(s.size()) + '#' + s;
        }
        std::cout << res;
        return res;
    
    }

    vector<string> decode(string s) {
        vector<string> res;
        int wordLen = 0;
        for (int i = 0; i < s.size();){
            if (s[i] == '#'){
                string out = "";
                for (int j = i + 1; j < i + wordLen +1 ; j++){
                    out = out+s[j];
                    
                }
                res.push_back(out);
                i = i + wordLen +1;
                wordLen = 0;
                 
            }
            else {
                wordLen = wordLen*10 + (int)(s[i] - '0');
                i++;
            }
        }

        return res;
    }
};
