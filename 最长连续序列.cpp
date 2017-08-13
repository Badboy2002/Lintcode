class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return an integer
     */
    int longestConsecutive(vector<int> &num) {
        // write you code here
        int n=0,m,min,mark,count,maxcount,len;
        len=num.size();
        while (n<len)
        {
            for (m=n+1,min=num[n],mark=n;m<len;m++) //??
            {
                if (min<=num[m])
                {
                    ;
                }
                else 
                {
                    min=num[m];
                    mark=m;
                }
            }
            num[mark]=num[n];
            num[n]=min;
            n++;
        }

        count=1;
        maxcount=1;
        n=0;
        while (n<len)
        {
            if (num[n]==num[n+1])
            {
                n++;
                continue;
            }
            if (num[n]+1==num[n+1])
            {
                count++;
            }
            else {count=1;}
            if (maxcount<=count)
                {maxcount=count;}
            n++;
        }
        return maxcount;
     
    }
};