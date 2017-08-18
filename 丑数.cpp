class Solution {
public:
    /**
     * @param num an integer
     * @return true if num is an ugly number or false
     */
    bool isUgly(int num) {
        // Write your code here
        if (num==1)   // 清除special case
            return true;
        if (num<=0)
            return false;
        while (num!=1)
        {
            if (num%3==0)
            {
                num=num/3;
            }
            else if (num%5==0)
            {
                num=num/5;
            }
            else if (num%2==0)
            {
                num=num/2;
            }
            else
            {
                if (num!=2&&num!=3&&num!=5)
                {
                    return false;
                }
            }
        }
        return true;
    }
};