class Solution 
{
public:
    int countDigits(int num) 
    {
        int org = num; 
        // Making the Org Variable so that after we pick up the
        // last digit the number remains the same
        int count=0;
        // always count variable should be declare 0
        while(num > 0)  
        // condition for last digit
        {
            int digit = num % 10;
            // taken the last digit
            if( digit!=0 && org%digit==0 )
            // here the digit should not be zero and 
            // that should be divisible by the orginal number
            {
                count++;
            }

            num = num / 10;
            // here we have new value
        }
        return count;
    }
};