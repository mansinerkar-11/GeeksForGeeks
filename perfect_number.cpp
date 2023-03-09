//{ Driver Code Starts
// Initial Template for C++
#include<iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      int fact(int n){
       if(n==0||n==1)
           {return 1;}
       else {return n*fact(n-1);}
       }
   
   int isPerfect(int N) {
       int sum = 0;
       int temp =N;
       while(N){
           sum = sum + fact(N%10);
           N /= 10;
       }   if(sum==temp) 
           {return 1;}else{
       return 0;}
       }
};

//{ Driver Code Starts.
int main() {

        int N;
        cout<<"Enter Number: ";
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    
}

// } Driver Code Ends