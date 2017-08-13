class Solution {
public:
    /**
     * @param n, m: positive integer (1 <= n ,m <= 100)
     * @return an integer
     */
    int uniquePaths(int m, int n) {
        // wirte your code here
		long double ways,x,y,j,k,i;
        int tmp;
        m=m-1;
        n=n-1;
        tmp=n;
        if (m<n)  //
        {	
      		 n=m;
        	 m=tmp;
        }
        i=m+n;
        for (x=i,y=1;x>m;x--)
        {
            y=y*x;
        }
        for (j=1,k=1;j<=n;j++)
        {
            k=k*j;
        }
		ways=y/k;
       	return ways;
    }
};
