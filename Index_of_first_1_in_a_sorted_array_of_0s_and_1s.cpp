//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(sum==1)
            {
                return i;
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {{
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends