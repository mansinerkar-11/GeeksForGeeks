//{ Driver Code Starts
#include <iostream>
#include<vector>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int> >A)
	{
	    int n=A.size();
	    int m=A[0].size();
	    int i=0;
	    int ans=0;
	    int j=m-1;
	    while(i<n && j>=0)
	    {
	        if(A[i][j]==0)
	        {
	            ans=ans+j+1;
	            i++;
	        }
	        else{
	            j--;
	        }
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> >A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends