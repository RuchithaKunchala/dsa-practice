/*
Problem: Palindrome number
Link: https://leetcode.com/problems/palindrome-number/description/
Platform: LeetCode
Difficulty: Easy
Approach: Early rejection, if number is negative (or) zero (or) less than 10 (or) ending with '0'.
    Next reversing only half the original number. Building reverse from right, while shrinking the original. 
    This can avoid overflow and reversing entire number.
Time: O(n/2) ~ O(n); n=number of digits in x
Space: O(1)  
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0) ) //Early rejection
            return false; 
        int rev=0;  
        while(x>rev) //prevents overflow 
        { 
            rev=10*rev + (x%10); 
            x=x/10; 
        } 
        if(rev==x || rev/10==x) return true;  //handling even & odd length of palindrome 
        else return false; 
    } 
}; 
