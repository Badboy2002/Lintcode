class Solution{
public:
    /**
     * @param colors: A list of integer
     * @param k: An integer
     * @return: nothing
     */    
    void sortColors2(vector<int> &colors, int k) {
        // write your code here
        vector<int> save;
        int counts,n,m,len;
        
        for (n=1;n<=k;n++)
        {
            m=0;
            while (m<colors.size())
            {   
                if (colors[m]==n)
                {
                    save.push_back(n);
                    colors.erase(colors.begin()+m);
                    m=0;
                    continue;
                }
                m++;
            }
        }
        colors=save;
        
    }
};