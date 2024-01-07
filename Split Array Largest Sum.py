
class Solution:
    def isPossible(self, arr, N, K,mid):
        count = 1
        _sum = 0
        
        for i in range(N):
            _sum += arr[i]
            if _sum>mid:
                count +=1
                _sum = arr[i]
                
        return count <=K
        
    def splitArray(self,arr, N,K):
        low = max(arr)
        high = sum(arr)
        result = -1
        
        while low<=high:
            mid = low +(high-low)//2
            
            if self.isPossible(arr,N,K,mid):
                result = mid
                high = mid -1
                
            else:
                low = mid+1
                
        return result

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K=map(int,input().split())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.splitArray(arr,N,K))
# } Driver Code Ends
