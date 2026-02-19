/* 
Problem: Given an integer n, return the number of prime numbers that are strictly less than n.
Link: https://leetcode.com/problems/count-primes/description/
Platform: LeetCode
Difficulty: Medium
Approach: Sieve of Eratosthenes
        [Checking all the integers in the range [1, n - 1] is not efficient. Think about a better approach.
        Since most of the numbers are not primes, we need a fast approach to exclude the non-prime integers.]
Time: O(n)
Space: O(1)
*/
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> prime(n, true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<n;i++) {
            if(prime[i]==true) { 
                for(int j=i*i;j<n;j=j+i) 
                    prime[j]=false; 
            }
        } 
        int count=0;
        for(auto it=prime.begin();it!=prime.end();it++) {
            if((*it)==true) 
                count++;
        }
        return count;
    }
};
