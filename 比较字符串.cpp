class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
    int n=0,len,pos;
    len=B.length();
    while (n<len)
    {
        pos=A.find(B[n]);
        if (pos==-1)
        {
            return false;
        }
        else
        {
            A.erase(A.begin()+pos);
        }
        n++;
    }
    return true;
}
};
