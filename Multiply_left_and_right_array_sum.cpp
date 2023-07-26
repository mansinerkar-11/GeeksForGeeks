//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

int multiply(int arr[], int n);


int main() {
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
     int k=n/2;
        int sum=0;
        int sum1=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        
        for(int i=k;i<n;i++){
            sum1=sum1+arr[i];
        }
        
        int ans= sum*sum1;
        return ans;
    }
