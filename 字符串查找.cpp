class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if (source==NULL||target==NULL)  //清除special case
            return -1;
        int sizeSource,sizeTarget;
        sizeSource=strlen (source);
        sizeTarget=strlen (target);
        if (sizeTarget==0)
            return 0;
        if (sizeSource==0)
            return -1;
    
        
        int n,m,count;
        for (n = 0; n<sizeSource ;n++)   //开始比对
        {
            if (source[n]==target[0])
            {
                count=0;
                m=n;
                while (count<sizeTarget)
                {
                   if (source[m]==target[count])
                   {
                       m++;
                       count++;
                   }
                   else break;
                }
                if (count>=sizeTarget)
                    return n;
            }
   
        }
        return -1;
    }
};
