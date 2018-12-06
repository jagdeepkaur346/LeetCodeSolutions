/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        bool ret;
       if (x < 0)
       {
           ret = false;
       }
        else
        {
        std::string s = std::to_string(x); 
        int i;
        int j= s.length()-1;
        for(i =0; i< s.length(); i++)
        {
            if(s[i]!=s[j])
            {  
               ret = false;
                break;
            }
            else
            {
                if(i==j)
                {ret = true;}
                 j--;
                if(j<i)
                    ret =true;
                continue;
            }
            
        }}
      return ret; 
    }
};
