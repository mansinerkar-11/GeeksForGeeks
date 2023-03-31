//{ Driver Code Starts
//Initial template for C++

#include<iostream> 

using namespace std; 

// } Driver Code Ends
//User function Template for C++



class Solution{   
public:
    int minxorpair(int N, int arr[]){    
       sort(arr,arr+N);
       int ans = INT_MAX;
       for(int i=0;i<N-1;i++)
       {
           ans=min(ans,arr[i]^arr[i+1]);
           
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.minxorpair(N, arr) << endl;
    }
    return 0; 
} 

// } Driver Code Ends