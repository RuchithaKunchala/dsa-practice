/* 
Problem: Given an integer n, return true if n is a perfect number, otherwise return false.
Link: https://leetcode.com/problems/perfect-number/description/
Platform: LeetCode
Difficulty: Easy 
Approach: A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
Time: O(√n) 
Space: O(1)  */
class Solution {
public:
    bool checkPerfectNumber(int num) { 
        if(num==1) return false;
        int sum = 1; 
        for(int i=2 ; i<= sqrt(num) ; i++) { 
            if(num%i == 0) { 
                sum = sum + i;
                if(i != num/i)            //to avoid double counting when a number is perfect square 
                    sum = sum + (num/i);  //factors come in pairs, hence this summation 
            } 
        } 
        if(sum == num) 
            return true;
        return false;
    }
}; 
