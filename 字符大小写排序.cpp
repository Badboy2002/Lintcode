class Solution {
public:
    /** 
     * @param chars: The letters array you should sort.
     */
    void sortLetters(string &letters) {
        // write your code here
        int n,len;
        string lower,upper;
        len=letters.length();
        for (n=0;n<len;n++)
        {
            if (65<=letters[n]&&letters[n]<=90)
                upper=upper+letters[n];
            else if (97<=letters[n]&&letters[n]<=122)
                lower=lower+letters[n];
        }
        
        for (n=0;n<lower.length();n++)
        {
            letters[n]=lower[n];
        }
        
        for (int i=0;i<upper.length();i++,n++)
        {
        	letters[n]=upper[i];
        }
        
    }
};
