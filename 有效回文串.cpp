class Solution {
public:
    /*
     * @param s: A string
     * @return: Whether the string is a valid palindrome
     */
    bool isPalindrome(string s) {
        // write your code here
        int i;
        string save;
        for (i=0;i<s.length();i++)
        {
            while (s[i]==' ')
            {
                i++;
                continue;
            }
            if (isalnum (s[i]) )
            {
                save.push_back(tolower (s[i]) );
            }
        }
        int left,right;
        left=0;
        right=save.length()-1;
        while (left<=right)
        {
            if (save[left]!=save[right])
                return false;
            left++;
            right--;
        }
        return true;
          
    }
};