/* 
Problem: Given an integer n, return the number of trailing zeroes in n!.
Link: https://leetcode.com/problems/factorial-trailing-zeroes/description/
Platform: LeetCode
Difficulty: Medium
Approach: We count factors of 5 in n!. 
          Multiples of 25 contribute an extra 5, multiples of 125 contribute yet another, so we repeatedly divide by powers of 5.
Time: O(log n)  
Space: O(1) 
*/
class Solution { 
public: 
    int trailingZeroes(int n) {  
        int count=0; 
        int i=5;                 //there are abundant number of 2's in all factorials but 5's are very few
        while(n/i>0) {           // every multiple of 5 contributes to atleast one 5
            int k=n/i;           
            count=count + k;     //we count powers of 5 in n! 
            i=i*5;               //if n>=25, then they contribute to two 5's and is n>=125 they contribute to three 5's
        } 
        return count; 
    } 
}; 
// zeros = ⌊n/5​⌋ + ⌊n/25​⌋ + ⌊n/125​⌋ + ⌊n/625​⌋ + …
