#include <bits/stdc++.h> 
using namespace std;
string longestPalinSubstring(string s) {
     int maxLen=0;
        string str;
        for(int i=0;i<s.size();i++)
        {
           
            int left=i;
            int right=i;
            while(left>=0&& right<s.size()&&s[left]==s[right])
            {
                left--;
                right++;
            }
            left++;
            right--;
            int currPalinLen = right-left+1;
            if(maxLen<currPalinLen)
            {
                maxLen = currPalinLen;
                str = s.substr(left,right-left+1);
            }
            
            left=i;
            right=i+1;
            while(left>=0 && right<s.size() && s[left]==s[right])
            {
                left--;
                right++;
            }
            left++;
            right--;
            currPalinLen = right-left+1;
            if(maxLen<currPalinLen)
            {
                maxLen = currPalinLen;
                str = s.substr(left,right-left+1);
            }
            
        }
        return str;
    
}