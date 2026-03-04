/* 
Problem: Find Greatest Common Divisor of Array
Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
Platform: LeetCode
Difficulty: Easy
Approach: Basic Math
Time: O(log n)
Space: O(1)
*/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min = nums[0];
        int max = nums[n-1];
        int gcd = min;
        while(min>0) {
            if(max%min==0) { 
                break;
            }
            else {
                gcd = max%min;
                max = min;
                min = gcd;
            } 
        }
        return gcd;
    }
};
