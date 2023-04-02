//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
#include<vector>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> res;
    vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        sort(v1.begin(), v1.end());
        sort(v2.begin(),v2.end());
        
        int n=v1.size();
        int m=v2.size();
        
        int i=0, j=0;
        
        while(i<n && j<m)
        {
            if(v1[i]==v2[j])
            {
                res.push_back(v1[i]);
                i++;
                j++;
                
            }
            else if(v1[i]>v2[j])
            {
                j++;
            }
            else if(v1[i]<v2[j])
            {
                i++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.


int main(){{
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
// } Driver Code Ends