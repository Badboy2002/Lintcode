class Solution {
public:
    /**
     * @param num a non-negative integer
     * @return one digit
     */
    int addDigits(int num) {
        // Write your code here
        int sum=num,n,nul,len;
        char weishu[32];
        nul=sprintf (weishu,"%d",num); //输出到nul
        len=strlen (weishu);
        while (len>=2)
        {
            for (n=0,sum=0; n < len;n++)
            {
                sum=sum+num%10;
                num=num/10;
            }
            nul=sprintf (weishu,"%d",sum); //输出到nul
            len=strlen (weishu);
            num=sum;
        }
        return sum;
    }
};