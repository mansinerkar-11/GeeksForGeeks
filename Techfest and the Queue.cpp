//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int countFactors(int n){
        int count = 0;
        for(int i=2; i*i<=n; i++){
            if(n<=1) return 0;
            while(n%i == 0){
                count++;
                n/=i;
            }
        }
        if(n>1) count+=1;
        return count;
    }
	int sumOfPowers(int a, int b){
	    // Code here
	    int ans = 0;
	    for(int i=a; i<=b ; i++){
	        ans += countFactors(i);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
