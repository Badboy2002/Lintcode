class Solution {
public:
    /**
     * @param str: A string
     * @return An integer
     */
    int atoi(string str) {
        // write your code here
        int n=0;
        while ( n <str.length() )  //去除字母和空格
        {
            if ( isspace(str[n]) )
            {
                str.erase(str.begin()+n);
                continue;
            }
            n++;
        }
        n=0;
        while ( n <str.length() )
        {
         if ( isalpha(str[n]) )
            {
                str.erase(str.begin() + n,str.end());
                break;
            }
            n++;
        }
       
        
        int isnegative=0;
        long long num=0;
        if (str[0]=='+'&&str[1]=='-')
        {
            return 0;
        }
        if (str[0]=='-') //记录负号
        {
            isnegative=1;
            str.erase(str.begin());
        }
        if (str[0]=='+') //记录正号
        {
            isnegative=0;
            str.erase(str.begin());
        }
        
        if (str.find('+')!=-1)   //去除多余的符号
        {
            str.erase(str.find('+'),str.length()-1);
        }
        if (str.find('-')!=-1)   
        {
            str.erase(str.find('+'),str.length()-1);
        }
        
        
        if (str.find('.')!=-1) //去除小数
        {
            str.erase(str.find('.'),str.length()-1);
        }
    
        
        
        long long weishu=1,count=str.length()-1;
        while (count>=0)
        {
            num=num+weishu*(str[count]-48);
            if (num>INT_MAX)
            {
                if (isnegative==1)
                    return INT_MIN;
                else return INT_MAX;
            }
            count--;
            weishu=weishu*10;
        }
        if (isnegative==1)
            num=-num;
     
        return num;
    }
};