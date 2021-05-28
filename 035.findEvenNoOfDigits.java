/*
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
*/

class Solution {
    public int findEvenNoDigits(int[] nums) {

        int evenNoOfDigits = 0;
        int noOfdigits = 0;
        for(int num: nums){
            while(num > 0){
                num = num/10;
                noOfdigits++;
            }
            if(noOfdigits % 2 == 0){
                evenNoOfDigits++;
            }
        }
        return evenNoOfDigits;
    }
}