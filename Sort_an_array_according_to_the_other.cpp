//{ Driver Code Starts
//Initial template for C++

#include <iostream> 
#include<vector>
#include<unordered_map>
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        unordered_map<int,int>mp;
    vector<int>ans,t;
    for(auto i:A1){mp[i]++;}
    for(int i=0;i<M;i++){
        if(mp.find(A2[i])!=mp.end()){
            while(mp[A2[i]]--){
                ans.push_back(A2[i]);
            }
            mp.erase(A2[i]);
        }
    }
    
    for(auto i:mp){
        if(i.second!=0){
            while(i.second--){
                t.push_back(i.first);
            }
        }
    }
    sort(t.begin(),t.end());
    for(auto i:t){ans.push_back(i);}
    
    return ans;
}
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	
	return 0; 
} 

// } Driver Code Ends