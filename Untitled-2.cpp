//{ Driver Code Starts
#include <iostream>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getCompundInterest(int P, int T , int N , int R) {
      int A;
        A=P*pow((1+((R/100.0)/N)),N*T);
        return A;
        
    }
};

//{ Driver Code Starts.
int main() {
        int P,T,N,R;
        cout<<"Enter value of P T N R: ";
        cin>>P>>T>>N>>R;

        Solution ob;
        cout << ob.getCompundInterest(P,T,N,R) << endl;
    
    return 0;
}
// } Driver Code Ends