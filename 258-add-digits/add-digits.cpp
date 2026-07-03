class Solution {
public:
    int addDigits(int num) {
        int rev = 0;
        int ans = 0;
        int fin = 0;
        while(num>0)
        {
            int lastdigit = num % 10;
            rev = rev + lastdigit;
            num = num / 10;
        }
        while(rev>0)
        {
            int lastdigit = rev % 10;
            ans = ans + lastdigit;
            rev = rev / 10;
        }
        while(ans>0)
        {
            int lastdigit = ans % 10;
            fin = fin + lastdigit;
            ans = ans / 10;
        }
        return fin;
    }
};