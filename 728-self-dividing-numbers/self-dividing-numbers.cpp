class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ls;
        for(int i = left ; i <= right ; i++)
        {
            int temp = i;
            bool isdivisiable = true;

            while(temp>0)
            {
                int lastdigit = temp % 10;
                
                if(lastdigit == 0 || i % lastdigit != 0)
                {
                    isdivisiable = false;
                    break;
                }
                temp = temp / 10;
            }
            if(isdivisiable)
            {
                ls.push_back(i);
            }
        }
        return ls;
    }
};