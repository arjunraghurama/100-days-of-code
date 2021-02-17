/*
  https://leetcode.com/problems/roman-to-integer/submissions/
*/

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        std::map<char, int> mp;
            mp.insert(std::pair<char,int>( 'I', 1));
            mp.insert(std::pair<char,int>( 'V', 5));
            mp.insert(std::pair<char,int>( 'X', 10));
            mp.insert(std::pair<char,int>( 'L', 50));
            mp.insert(std::pair<char,int>( 'C', 100));
            mp.insert(std::pair<char,int>( 'D', 500));
            mp.insert(std::pair<char,int>( 'M', 1000));

        int previousNumber = INT_MAX;
        for(auto letter : s)
        {
            if (mp[letter] > previousNumber)
            {
                result += mp[letter];
                result-=2*previousNumber;
            }
            else
            {
                result+=mp[letter];
            }
            previousNumber = mp[letter];
        }
        return result;
    }
};
