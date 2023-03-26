#include<iostream>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
    int jump=0,start=0,end=0;
        for(int i=0;i<n-1;i++){
            end=max(end,arr[i]+i);
            if(start==i){
                start=end;
                jump++;
            }
        }
        if(start<n-1) return -1;
        return jump;
    }
    
};


//{ Driver Code Starts.

int main()
{
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    
    return 0;
}

// } Driver Code Ends