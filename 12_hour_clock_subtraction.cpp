

//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int subClock(int num1, int num2) {
      int ans=(num1-num2)%12;
        return (ans>=0) ? ans : ans+12;
    }
};

//{ Driver Code Starts.
int main() {
        int num1,num2;
        cout<<"Enter number 1 and bnumber 2: ";
        cin>>num1>>num2;

        Solution ob;
        cout << ob.subClock(num1,num2) << endl;
    
    return 0;
}
// } Driver Code Ends