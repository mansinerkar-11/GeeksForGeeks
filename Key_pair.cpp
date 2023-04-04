//{ Driver Code Starts
#include <iostream>
#include<unordered_map>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int,int>rest;
        for(int i=0;i<n;i++){
            if(x-arr[i]>0){
            rest[x-arr[i]]+=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(rest[arr[i]]!=arr[i]&&rest[arr[i]]!=0){
                return true;
            }
        }
        return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends