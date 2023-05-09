//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int k){
        int mod = 1e9 + 7;   
        int a[n + 1][k + 1];
    
    if (n == k)
        return 1;
        
    if(n < k)
        return 0;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= k; j++){
            
            if (i == j || j == 0)
                a[i][j] = 1;

            else
                a[i][j] =(a[i - 1][j] % mod) + (a[i - 1][j - 1] % mod) % mod;
        }
    }

    return (a[n][k] % mod);
}
};

//{ Driver Code Starts.

int main(){{
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends