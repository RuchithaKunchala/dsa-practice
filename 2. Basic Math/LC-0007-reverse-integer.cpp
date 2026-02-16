/* 
Problem: https://leetcode.com/problems/reverse-integer/description/ 
TC: 

*/
class Solution {
public:
    int reverse(int x) { 
        // INT32_MIN = -2147483648
        // INT32_MAX =  2147483647  
        int rev=0;
        while(x!=0) {
            int k=x%10; 
            //“Overflow must be prevented, not detected.”
            if(rev>INT32_MAX/10 || (rev==INT32_MAX/10 && k>7)) 
                return 0;
            else if(rev<INT32_MIN/10 || (rev==INT32_MIN/10 && k<-8)) 
                return 0;
            rev=rev*10+k; 
            x=x/10; 
        }
        return rev; 
    }
};
/*I reverse the number digit by digit using integer math. 
Before each step, I check whether multiplying by 10 and 
adding the next digit would overflow 32-bit limits. 
Then I compare against INT_MAX/10 and INT_MIN/10 and 
handle the last digit carefully. 
If overflow is possible at any point, I return 0. */
