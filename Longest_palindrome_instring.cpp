//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
       // code here
        int n =S.length(); 
        vector<vector<int>>dp(n , vector<int>(n, 0 )) ; 
        
        int l =0 , ii =0 ,jj =0 ;
        
        for(int g=0 ; g<n ;g++ )
        {
            for(int i=0 ,j=g ;j<n ;i++,j++ )
            {
                
                if(g==0)
                dp[i][j]=1; 
                else if(g==1 && S[i]==S[j])
                dp[i][j]=1 ;
                else
                {
                    if(S[i]==S[j] && dp[i+1][j-1])
                    dp[i][j] =1 ;
                }
                
                if(dp[i][j] && j-i+1 >l )
                {
                    l = j-i+1 ;
                    ii=i ;
                    jj =j ;
                }
                
            }
        }
        string ans = S.substr(ii, jj-ii+1) ;
        return ans ;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
