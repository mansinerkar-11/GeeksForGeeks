// Given a number N, find the cube root of N.

// Note: We need to print the floor value of the result.



#include<iostream>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int N) {
       return cbrt(N);
    }
};

//{ Driver Code Starts.
int main() {
        int N;
        cout<<"Enter number: ";
        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    
    return 0;
}
// } Driver Code Ends