/*
Given a number N, check if a number is perfect or not. A number is said to be perfect if sum of all 
its factors excluding the number itself is equal to the number.
*/

#include <iostream>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        if (N==1) return 0;
       int sum=1;
       for(int i=2; i<=sqrt(N); i++)
       {
           
           if(N%i==0)
            sum=sum+i+N/i;
           
           
       }
       
       if(sum==N) return 1;
       return 0;
       
       
   }
};

//{ Driver Code Starts.
int main() {
  
        long long N;
        cout<<"Enter number: ";
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    
    return 0;
}
// } Driver Code Ends