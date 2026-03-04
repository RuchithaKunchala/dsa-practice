/*
Problem: Count the Digits that Divide a number 
Link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/ 
Platform: LeetCode 
Difficulty: Easy 
Approach: Basic math  
Time: O(log n) or O(d); d = digits in x
Space: O(1)  
*/ 
class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int digit=num;
        while(num>0) {
            int last=num%10;
            if(last!=0 && digit%last == 0) //Division by zero leads to runtime crash 
                count++;
            num=num/10;
        } 
        return count;
    } 
}; 
