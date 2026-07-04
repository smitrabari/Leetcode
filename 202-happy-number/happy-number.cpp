class Solution {
public:
    bool isHappy(int num) {
        int rev;
        set<int> seen;
        while(num!=1)
        {
            if(seen.count(num))
            {
                return false;
            }
            seen.insert(num);
            rev = 0;
            while(num>0)
            {
                long lastdigit = num % 10;
                rev = rev + lastdigit*lastdigit;
                num = num / 10;
            }
            num = rev;
        }
        return true;
    }
};