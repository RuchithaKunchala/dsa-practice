/*
Problem: Given n, calculate F(n) 
Link: https://leetcode.com/problems/fibonacci-number/description/
Platform: LeetCode
Difficulty: Easy 
Approach: Two methods (i) Recursive (ii) Using Loops
Time: O(n); n=number of digits in x
Space: O(1)  
*/
// METHOD-I: Best solution for TC: Recursion + Memoization (Top-Down DP)
// TC = O(n; SC = O(n)
class Solution {
public:
    int F[51];           //global variable
    Solution() {
        for(int i=0;i<51;i++) {
            F[i]=-1;
        } 
    }
    int fib(int n) {  
        if(n<=1)   
            return n;
        if(F[n]!=-1)
            return F[n];
        F[n]=fib(n-1) + fib(n-2);
        return F[n];
    }
};
// METHOD-II: Iterative, using for loop
// TC = O(n); SC = O(1) 
class Solution {
public:
    int fib(int n) {  
        int f1=0, f2=1, f=0;
        if(n<=1) return n;
        for(int i=2;i<=n;i++) {
            f=f1+f2; 
            f1=f2;
            f2=f; 
        }
        return f;
    }
};
// METHOD-III: Using Recursion 
// TC = O(2^n) ; SC = O(n)
class Solution {
public:
    int fib(int n) {  
        if(n<=1)
            return n;
        else 
            return fib(n-2) + fib(n-1);
    }
};
