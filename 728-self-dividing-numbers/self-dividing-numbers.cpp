class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ls;
        // created a vector to store the self dividing numbers
        for(int i = left ; i <= right ; i++)
        // for loop for starting the range from left
        {
            int temp = i;
            // a temp. variable of i
            bool isdivisiable = true;

            while(temp>0)
            // lastdigit while loop
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
                // adding values to the vector
            }
        }
        return ls;
    }
};