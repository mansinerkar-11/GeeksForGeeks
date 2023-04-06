//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
          // code here
        int ans = INT_MAX;
        int xc=0,yc=0;
        for(int i=0;i<n;i++){
            if(a[i] == x)
                xc = i+1;
            if(a[i]==y)
                yc = i+1;
            if(xc and yc){
                ans = min(ans,abs(yc-xc));
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {{
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends