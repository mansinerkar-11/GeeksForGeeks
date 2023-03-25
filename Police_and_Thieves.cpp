//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        int total = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 'P'){
                for(int j = max(0,i-k) ; j<=min(n-1,i+k); j++){
                    if(arr[j] == 'T'){
                        arr[j] = '-';
                        total++;
                        break;
                    }
                }
            }
        }
        return total;
    }
};

//{ Driver Code Starts.

int main() 
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	
	return 0; 
} 


// } Driver Code Ends