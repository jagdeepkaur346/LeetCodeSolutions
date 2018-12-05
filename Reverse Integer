/*Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
*/

class Solution {
public:
    int reverse(int x) {
        int rem=0;
        long rev=0;
        
        while(x!=0)
        {
            rev=rev*10;
            rem= x%10;
            printf("%d",rem);
            x= x/10;
            rev= rev + rem;
            
        }
      if(rev > INT_MAX || rev < INT_MIN)
      {
        rev=0;  
      } 
      return rev;  
    }
};
