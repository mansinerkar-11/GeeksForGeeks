//{ Driver Code Starts
//Initial template for C++

#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long countPairs(int X[], int Y[], int m, int n) {
      vector<double> x,y;
       for(int i =0;i<m;i++)
       x.push_back((double)X[i]/(double)log(X[i]));
       
       for(int i =0;i<n;i++)
       y.push_back((double)Y[i]/(double)log(Y[i]));
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       long long ans = 0;
       for(auto e:y)
       {
           
           long long t =lower_bound(x.begin(),x.end(),e)-x.begin();
           // cout<<t<<" ";
           ans+=(t);
       }
       return ans;
   }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];
        for (int i = 0; i < m; i++) {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        Solution ob;
        auto ans = ob.countPairs(X, Y, m, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends