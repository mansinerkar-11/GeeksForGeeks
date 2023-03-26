#include <iostream>
using namespace std;
// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
      if(n==1)
            return 1;
        int sum=0,sumans=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            
        }
        for(int i=0;i<n;i++)
        {
            sum-=a[i];
            if(sum==sumans)
                return i+1;
            sumans+=a[i];
        }
        return -1;
    
        // Your code here
    }
 
};

//{ Driver Code Starts.


int main() {

    {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends