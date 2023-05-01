//{ Driver Code Starts
#include <iostream>
#include<vector>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int i=0;
        vector<int>pos;
        for(i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                pos.push_back(arr[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]<0){
                pos.push_back(arr[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            arr[i]=pos[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends