/* 
Problem: You are given a 3-digit number n, Find whether it is an Armstrong number or not.
Link: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1?selectedLang=cpp
Platform: GFG
Difficulty: Easy 
Approach: Basic Math
Time: O(log n)
Space: O(1) */
class Solution {
  public:
    int cube(int x) {
        return x*x*x;
    }
    bool armstrongNumber(int n) { 
        int num=n;
        int sum=0;
        while(n>0) {
            int last=n%10;
            sum=sum+cube(last);
            n=n/10;
        }
        if(sum==num)
            return true;
        return false;
    }
};
