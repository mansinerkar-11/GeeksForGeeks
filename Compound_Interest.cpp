/*Calculate the amount for given principal amount P , time T(in years), compounded N times in a year at rate R. Calculate floor of future value of given principal amount.

 

Example 1:

Input:
P = 1000 , T = 2 , N = 2 , R = 10
Output:
1215
Explanation:
The given Principal, Time, Rate and
number of compounds in a year results
in a amount of 1215.51.
The floor value being 1215, Output is 1215.*/


//{ Driver Code Starts
#include <iostream>
#include<math.h>
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