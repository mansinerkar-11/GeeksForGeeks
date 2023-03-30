//{ Driver Code Starts
// Initial template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) 
    {
        sort(arr,arr+n);
        if(n==1) return 0;
        int maxi = arr[n-1];
        int mini = arr[0];
        int maxi_diff = maxi - mini;
        
        int tmax = 0, tmin = 0;
        
        for(int i = 1; i<n; i++)
        {
            if(arr[i]-k<0) continue;
            
            tmin = min(arr[0]+k,arr[i]-k);
            tmax = max(arr[n-1]-k,arr[i-1]+k);
            maxi_diff = min(maxi_diff, tmax-tmin);
        }
        
        return maxi_diff;
        
        
    }
};

//{ Driver Code Starts.
int main() {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    
    return 0;
}
// } Driver Code Ends