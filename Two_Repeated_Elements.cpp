

#include<iostream>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<N+2;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
            {
                v.push_back(arr[i]);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int n;
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends