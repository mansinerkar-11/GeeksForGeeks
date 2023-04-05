//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;
typedef long long int ll;



// } Driver Code Ends
//User function Template for C++



/*  
     ar[] is the array
     n = number of element in array
     mod = modulo value;
*/
long long int product(int ar[], int n, long long int mod)
 {
     long long int mul=1;
     for(int i=0;i<n;i++)
     {
         mul=mul*ar[i];
     }
     
     return int(mul%mod);
 }

//{ Driver Code Starts.

int main()
{
   {
    int n;
    cin>>n;
    int ar[100001]={0};
    for(int i=0;i<n;i++)
      cin>>ar[i];  
      
    long long int mod=1000000007;
   cout<<product(ar,n,mod)<<endl;
    
 }
return 0;
}
// } Driver Code Ends