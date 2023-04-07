//{ Driver Code Starts
#include<iostream>
#include<vector>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    string str="" ;
    for(int i=0;i<s.length();i++)
    {
        if(isdigit(s[i]))
        {
            str+=s[i];
            if(isdigit(s[i+1])==false)
            {
                str+=" ";
            }
        }
        
    }
    if(str=="")
        {
            cout<<"No Integers";
        }
        else{
            cout<<str;
        }
}