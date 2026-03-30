#include <iostream>
using namespace std;
class Solution
{
public:
    bool isAlphanumeric(char c)
    {
        return (c >= 48 && c <= 57)|| (c >= 65 && c <= 90) || (c >= 97 && c <= 122) ;
    }
    bool isPalindrome(string s)
    {
        int l = 0, r = s.length()-1;
        while (l <= r)
        {
            while (l<r &&!isAlphanumeric(s[l]))
                l++;
            while (l<r &&!isAlphanumeric(s[r]))
                r--;
            if (tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};