//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
             for(int i=s.size()-1;i>=0;i--)
             {
                 if(s[i]=='1')
                 {
                    return i;
                 }
             }
         return -1;
    }
    

};

//{ Driver Code Starts.

int main() {{
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends