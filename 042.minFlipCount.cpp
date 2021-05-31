/*
https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/

Input: s = "0100"
Output: 1
Explanation: If you change the last character to '1', s will be "0101", which is alternating.
*/

class Solution {
    
    void flip(char &c){
        c = c == '0' ? '1':'0';
    }
    
    int flipCount(string &s){
        
        int flipCountZero = 0;
        int flipCountOne = 0;
        int len = s.length();
        
        char expected = '0';
        for(int i=0; i< len; ++i)
        {
            if(expected != s[i])
                flipCountZero++;
            flip(expected);
        }
        
        expected = '1';
        for(int i=0; i< len; ++i)
        {
            if(expected != s[i])
                flipCountOne++;
            flip(expected);
        }
        return min(flipCountZero,flipCountOne);
    }
public:
    int minOperations(string s) {
        return flipCount(s);
    }
};
