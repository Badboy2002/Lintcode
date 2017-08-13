class Solution {
public:
    
    /*
     * @param s: A string
     * @return: the length of last word
     */
    int lengthOfLastWord(string s) {
        // write your code here
        int n=0,len;
        len=s.length()-1;
        while (s[len]==' ')
        {
             len--;
        }
           
        for (;len>=0;len--)
        {
            if (s[len]==' ')
                return n;
            n++;
        }
        return s.length();
    }
};