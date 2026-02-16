/*
Problem: Count the Digits that Divide a number 
Link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/ 
Platform: LeetCode 
Difficulty: Easy 
Approach: Basic math  
Time: O(log n) 
Space: O(1)  
*/
class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int digit=num;
        while(num>0) {
            int last=num%10;
            if(digit%last == 0) {
                count++;
            }
            num=num/10;
        } 
        return count;
    } 
}; 
