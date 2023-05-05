
#include <iostream>
#include <unordered_map>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        int minIdx{INT_MAX};
        unordered_map<int,int>pos,rept;
       for(int i=0;i<n;i++){
            pos[arr[i]] = i;
            rept[arr[i]]++;
       }
       
       for(auto x : rept)
            if(x.second==1)minIdx = min(minIdx,pos[x.first]);
       return arr[minIdx];

        
    } 
  
};


//{ Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

