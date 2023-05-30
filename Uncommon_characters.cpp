//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string str="";
        for(auto c:A)
            if(B.find(c)==string::npos && str.find(c)==string::npos)
                str += c;
        for(auto c:B)
            if(A.find(c)==string::npos && str.find(c)==string::npos)
                str += c;
        sort(str.begin(),str.end());
        if(str.length()==0)
            return "-1";
        return str;
    }
        
};



//{ Driver Code Starts.

int main()
{
   
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends