class Solution {
public:
    long reverse(long x) 
    {
        long rev = 0;
        long org = x;
        if(x < 0)
        {
            x = -x ;
        }
        while(x > 0)
        {
            long lastdigit = x % 10 ;
            rev = lastdigit + rev*10 ;
            x = x / 10;
        }
        if(org < 0)
        {
            rev = -rev ;
        }
        if(rev<= -pow(2,31) || rev>=pow(2,31) - 1)
        {
            rev = 0;
        }
        return rev;
    }
};