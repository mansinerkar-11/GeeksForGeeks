//{ Driver Code Starts
//Initial template for C++

#include <iostream>
#include<vector>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    // int ans[n];
    void leftRotate(int arr[], int n, int d) {
         vector<int>a,b;
        for(int i;i<d;i++)
        {
            a.push_back(arr[i]);
        }
        for(int i=d;i<n;i++)
        {
            b.push_back(arr[i]);
        }
        b.insert(b.end(),a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            arr[i]=b[i];
        }
    }
};

//{ Driver Code Starts.
int main() {{
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends