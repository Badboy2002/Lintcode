class Solution {
public:
    /*
     * @param num: a positive number
     * @return: true if it's a palindrome or false
     */
    bool isPalindrome(int num) {
        // write your code here
        char number[20];
        int n=0,m=0;
        while (num!=0)
        {
            number[n]=num%10+48;
            num=num/10;
            n++;
            m++;
        }
        m--;
        n=0;
        while (n<m)
        {
            if (number[n]!=number[m])
            {
                return false;
            }
            n++;
            m--;
        }
        return true;
    }
};