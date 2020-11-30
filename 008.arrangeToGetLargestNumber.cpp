/*
 *https://leetcode.com/problems/largest-number/
 *
 */
 
 
class Solution {
public:
    static bool compare(int num1, int num2)
    {
        string str1 = to_string(num1).append(to_string(num2));
        string str2 = to_string(num2).append(to_string(num1));
        return str1.compare(str2)>0? 1:0;
    }
    
    string largestNumber(vector<int>& nums) {
        int res = count(nums.begin(), nums.end(),0);
        if(res == nums.size())
        {
            return "0";
        }
        sort(nums.begin(), nums.end(), compare);  
        string result;
        for (auto item: nums)
        {
            result.append(to_string(item));
        }
        
        return result;
    }
};
