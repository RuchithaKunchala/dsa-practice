/* 
Problem: Given an integer n, return the number of prime numbers that are strictly less than n.
Link: https://leetcode.com/problems/count-primes/description/
Platform: LeetCode
Difficulty: Medium
Approach: Sieve of Eratosthenes
        [Checking all the integers in the range [1, n - 1] is not efficient. Think about a better approach.
        Since most of the numbers are not primes, we need a fast approach to exclude the non-prime integers.]
Time: O(n log log n) 
Space: O(n)
*/
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> prime(n, true);   //creating a boolean array of size n
        prime[0]=false;                //marking non-prime numbers false
        prime[1]=false;
        for(int i=2;i*i<n;i++) {       //Runs while i ≤ √n
            if(prime[i]==true) { 
                for(int j=i*i;j<n;j=j+i) 
                    prime[j]=false; 
            }
        } 
        int count=0;                 //counting remaining true values 
        for(auto it=prime.begin();it!=prime.end();it++) {
            if((*it)==true) 
                count++;
        }
        return count;
    }
};
/* 
WHAT IS EXACTLY "SIEVE OF ERATOSTHENES"? 
for(int i=2;i*i<n;i++) {       
    if(prime[i]==true) {         //for each prime number, we mark its multiples as non-primes 
        for(int j=i*i;j<n;j=j+i) 
            prime[j]=false; 
    }
} 
-> for each prime number, we mark its multiples as non-primes
        when i = 2 → mark 4,6,8,10…
        when i = 3 → mark 9,12,15…
        when i = 5 → mark 25,30…
-> why we start inner loop from i*i and not 2*i
        Reason: we already handled smaller multiples for ex. when i=5;
        5x2 = 10, already marked by 2
        5x3 = 15, already marked by 3
        5x4 = 20, already marked by 2
        5x5 = 25, is the first new composite number
-> Hence we start from i*i, this removes huge redundant work.

-> Why TC is of the loop is O(n log log n)
        for each prime p, the inner loop runs for n/p times.
        total work for all primes is: n/2 + n/3 + n/5 + n/7 + ..........
        sum = n x ( 1/2 + 1/3 + 1/5 + 1/7 + ...........)
        In mathematics number theory, Harmonic sum over primes is log log n (and not log n!) 
*/
