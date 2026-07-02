class Solution {
public:
    bool isPalindrome(long x) {
        long org=x;
        long rev=0;
        while(x>0)
        {
            long lastdigit = x % 10;
            rev = lastdigit + rev*10;
            x = x / 10;
        }
        if(rev<= -pow(2,31) || rev>=pow(2,31)-1)
        {
            rev = 0;
        }
        if(org==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};