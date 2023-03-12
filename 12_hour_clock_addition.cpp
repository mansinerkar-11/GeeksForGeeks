
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int clockSum(int num1, int num2){
        int res=num1+num2;
           return res%12;
    }
};

//{ Driver Code Starts.

int main(){
        int num1, num2;
        cout<<"Enter num1 and num2: ";
        cin>>num1>>num2;
        
        Solution ob;
        cout<<ob.clockSum(num1, num2)<<endl;
    
    return 0;
}
// } Driver Code Ends