/*Given a string S of length N, find the pattern of the strings as shown below in the examples.

Example 1:

Input: S = "GeeK"
Output: Geek
        Gee
        Ge
        G
Explanation: Decrease one character 
after each line*/


//{ Driver Code Starts
#include <iostream>
#include<vector>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	   	    vector<string> ans;
	    for(int i=0;i<S.size();i++)
	    {
	        string temp = "";
	        for(int j=0;j<S.size()-i;j++)
	        {
	            temp = temp + S[j];
	        }
	        ans.push_back(temp);
	    }
	    return ans;

	}

};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   		Solution ob;

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends