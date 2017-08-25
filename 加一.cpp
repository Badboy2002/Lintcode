class Solution {
public:
    /*
     * @param digits: a number represented as an array of digits
     * @return: the result
     */
    vector<int> plusOne(vector<int> digits) {
        // write your code here
        long n,now=1,sum=0;
        for (n=digits.size()-1;n>=0;n--)
        {
            sum=sum+digits[n]*now;
            now=now*10;
        }
        sum++;
        vector<int> save;
        while (sum != 0)
        {
            save.push_back(sum%10);
            sum=sum/10;
        }
        vector<int> last;
        for (int k=save.size()-1;k>=0;k--)
        {
            last.push_back(save[k]);
        }
        return last;
        
        
    }
};