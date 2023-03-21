/*Given N, count all ‘a’(>=1) and ‘b’(>=0) that satisfy the condition a3 + b3 = N.*/

//{ Driver Code Starts
#include <iostream>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N) {
       int count=0;
        for(int a=1;a<=cbrt(N);a++)
             for(int b=0;b<=cbrt(N);b++)
                if(((a*a*a)+(b*b*b))==N)
                count++;
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    
        int N;
        cout<<"Enter number: ";
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    
    return 0;
}
// } Driver Code Ends