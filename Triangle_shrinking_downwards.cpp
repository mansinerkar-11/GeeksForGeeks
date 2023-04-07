//{ Driver Code Starts
#include <iostream>
#include<string>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string triDownwards(string S) {
        string str="";
        for(int i=0; i<S.size(); i++)
        {
            for(int j=0; j<S.size(); j++)
            {
                if(j>=i)
                    str += S[j];
                else
                    str += ".";
            }
        }
        return str;
    }

};

//{ Driver Code Starts.
int main() {{
        string S;
        
        cin >> S;

        Solution ob;
        string ans=ob.triDownwards(S);
        
        for(int i=0 ; i<ans.length() ; i++)
        {
            cout<<ans[i];
            if((i+1)%S.length()==0)
                cout<<endl;
        }
        
    }
    return 0;
}
// } Driver Code Ends