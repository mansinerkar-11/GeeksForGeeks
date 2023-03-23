//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long diagonals(int n)
	{
		long long num=(long long)n;
		return num*(num-3)/2;
	}
};

//{ Driver Code Starts.
int main() 

    {
        int n;
        cout<<"Enter: ";
        cin >> n;

	   

	    Solution ob;
	    cout << ob.diagonals(n) << "\n";
   
    
    return 0;
}

// } Driver Code Ends