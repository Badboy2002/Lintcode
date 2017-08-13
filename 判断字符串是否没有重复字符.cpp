class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        unsigned int n,m;
        for (n=0;n<str.length();n++)
        {
            for (m=n+1;m<=str.length();m++)
            {
                if (str[n]==str[m])
                    {
                    	return false;
					}
            }
        }
        return true;
    }
};