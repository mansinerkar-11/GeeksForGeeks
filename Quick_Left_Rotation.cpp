//{ Driver Code Starts
#include <iostream>
#include<algorithm>
// #include<numeric>
using namespace std;
// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   k=k%n;
       int j,l,temp;
       for(int i=0;i<__gcd(n,k);i++){
           temp=arr[i];
           j=i;
           while(1){
               l=j+k;
               if(l>=n) l=l-n;
               if(l==i) break;
               arr[j]=arr[l];
               j=l;
           }
           arr[j]=temp;
       }
    } 
		 

};

//{ Driver Code Starts.
int main() 
{
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }
        Solution ob;
        ob.leftRotate(a,k,n);
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 
	    cout << "\n";
    }
    return 0;
}



// } Driver Code Ends