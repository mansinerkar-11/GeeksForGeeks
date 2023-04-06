//{ Driver Code Starts
#include <iostream>
#include<stack>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	 stack<int>s;
     for(int i = A; i<=B; i++){
         s.push(i);
     }
     sort(arr, arr+n);
     for(int i = n-1; i>=0; i--){
         if(arr[i] == s.top()){
             s.pop();
         }
         if(s.empty() == true){
         return true;
         }
     }
      return false;
     }
    		 

};
	

//{ Driver Code Starts.


int main() 
{
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends