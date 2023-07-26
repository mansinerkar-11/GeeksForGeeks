// /{ Driver Code Starts
#include<iostream>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         sort(a,a+n);
         return a[n-3];
       
    }

};

//{ Driver Code Starts.
 
int main()
{
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends