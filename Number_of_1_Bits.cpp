#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
         int n = N;
        int cnt = 0;
        while(n != 0){
            if(n%2 == 1)
                ++cnt;
            n /= 2;
        }
        return cnt;
    
    }
};

//{ Driver Code Starts.
int main() {

        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    
    return 0;
}

// } Driver Code Ends