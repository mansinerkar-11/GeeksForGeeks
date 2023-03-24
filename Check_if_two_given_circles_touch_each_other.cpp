#include<iostream>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int findFocalLength(float R, string type){
	    if(type=="convex"){
        return -ceil(R/2);
    }else{
        return R/2;
    }
	}
};

//{ Driver Code Starts.
int main(){
		float n;
		string type;
		cin >> type >> n;
		Solution ob;
		int ans = ob.findFocalLength(n, type);
		cout << ans <<"\n";
	
	return 0;
}
// } Driver Code Ends