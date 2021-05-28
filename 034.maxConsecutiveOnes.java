/*
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/

class Solution {
    public int findMaxConsecutiveOnes(int[] nums){
        int maxConsecutiveOnes = 0;
        int counter = 0;
        for(int num: nums) {
            if(num == 1){
                counter++;
            } else {
                counter = 0;
            }

            if(counter > maxConsecutiveOnes){
                maxConsecutiveOnes = counter;
            }
        }
        return maxConsecutiveOnes;
    }
}