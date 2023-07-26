/*Given a number N, find the Nth term in the series 1, 3, 6, 10, 15, 21…

 

Example 1:

Input :
N = 4 
Output:
10
Explanation:
The 4th term of the Series is 10.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findNthTerm(int N) {
         int sum = 0;
        for(int i=1; i<=N; i++){
            sum = sum + i;
        }
        return sum;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.findNthTerm(N) << endl;
    }
    return 0;
}
// } Driver Code Ends