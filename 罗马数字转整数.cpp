class Solution {
public:
    /**
     * @param s Roman representation
     * @return an integer
     */
    int romanToInt(string& s) {
        // Write your code here
        int sum=0,n=0,num1=0,num2=0;
        while (n<s.length())
        {
            if (s[n]=='I')
                num1=1;
            if (s[n]=='X')
                num1=10;
            if (s[n]=='C')
                num1=100;
            if (s[n]=='M')
                num1=1000;
            if (s[n]=='V')
                num1=5;
            if (s[n]=='L')
                num1=50;
            if (s[n]=='D')
                num1=500;
                
            if (s[n+1]=='I')
                num2=1;
            if (s[n+1]=='X')
                num2=10;
            if (s[n+1]=='C')
                num2=100;
            if (s[n+1]=='M')
                num2=1000;
            if (s[n+1]=='V')
                num2=5;
            if (s[n+1]=='L')
                num2=50;
            if (s[n+1]=='D')
                num2=500;
            
            if (num1>=num2)
                sum=sum+num1;
                else
                {
                    sum=sum+num2-num1;
                    n=n+2;
                    num1=0;
                    num2=0;
                    continue;
                }

            num1=0;
            num2=0;
            n=n+1;
        }
        return sum;
    }
};