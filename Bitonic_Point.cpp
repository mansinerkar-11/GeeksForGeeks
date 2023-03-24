/*Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.
Note: If the array is increasing then just print the last element will be the maximum value.

Example 1:

Input: 
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.*/
#include <iostream>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   return *max_element(arr,arr+n);
	}
};

//{ Driver Code Starts.

int main() {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        float ans;
         ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    
    return 0;
}

// } Driver Code Ends