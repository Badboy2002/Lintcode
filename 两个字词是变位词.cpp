class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here
         int ascii[128]={0},ascii1[128]={0};
	int n,index1,index2;
	for (n=0;n<s.length();n++)
	{
		index1=int (s[n]);
		index2=int (t[n]);
		ascii[index1]=ascii[index1]+1;
		ascii1[index2]=ascii1[index2]+1;
	}
	for (n=0;n<128;n++)
	{
		if (ascii[n]!=ascii1[n])
		{
			return false;
		}
	 		
	}
	return true;
    }
};