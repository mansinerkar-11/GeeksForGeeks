#include<iostream> 
#include<vector>
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string getNumber(int B, int N)
    {string s1;
        vector<string> v;
        int  q,r;
        while(N!=0){
            q = N/B;
            r= N%B;
            if(r<10) v.push_back(to_string(r));
            if(r == 10)v.push_back("A");
            if(r == 11)v.push_back("B");
            if(r == 12)v.push_back("C");
            if(r == 13)v.push_back("D");
            if(r == 14)v.push_back("E");
            if(r == 15)v.push_back("F");
            N= q;
        }
        while(!v.empty()){
            s1 = s1+v.back();
            v.pop_back();
        }
        return s1;// Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
        int B,N;
        cin>>B>>N;
        Solution ob;
        string ans  = ob.getNumber(B,N);
        cout<<ans<<endl;
    
    return 0;
}
// } Driver Code Ends