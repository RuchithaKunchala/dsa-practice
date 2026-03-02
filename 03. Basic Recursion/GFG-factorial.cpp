/*
Problem: Factorial 
Link: https://www.geeksforgeeks.org/problems/factorial5739/1
Platform: GFG 
Difficulty: Easy 
Approach: Recersion
Time: O(n*n)
Space: O(1)  
*/ 
class Solution {
  public: 
    int factorial(int n) { 
        if(n==1) 
            return 1;
        else 
            return n*factorial(n-1); 
    } 
};
