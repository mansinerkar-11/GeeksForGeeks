//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{{
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
      int low;;
        int high;
        sort(A,A+n);
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                low=j+1;
                high=n-1;
                while(low<high)
                {
                    if(A[i]+A[j]+A[low]+A[high]==X)
                    {
                        return true;
                    }
                    else if(A[i]+A[j]+A[low]+A[high]<X)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }
        return false;
}