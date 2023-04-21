//{ Driver Code Starts
#include <iostream>
#include<cmath>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getCompundInterest(int P, int T , int N , int R) {
        // code here
        return P*pow((1+(R/100.0)/N),N*T);
    }
};

//{ Driver Code Starts.
int main() {{
        int P,T,N,R;
        
        cin>>P>>T>>N>>R;

        Solution ob;
        cout << ob.getCompundInterest(P,T,N,R) << endl;
    }
    return 0;
}
// } Driver Code Ends