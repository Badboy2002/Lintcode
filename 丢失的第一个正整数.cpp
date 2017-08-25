class Solution:
    # @param A, a list of integers
    # @return an integer
    def firstMissingPositive(self, A):
        # write your code here
        n = len(A)
        i = 0
        if n==0: return 1
        while i<n:
            while A[i]!=i+1 and A[i]<=n and A[i]>0 and A[i]!=A[A[i]-1]: 
                t = A[i]
                A[i] = A[A[i]-1] 
                A[t-1] = t
            i = i+1
        for i in xrange(n):
            if A[i]!=i+1: return i+1
        return n+1