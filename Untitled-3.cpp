//{ Driver Code Starts
#include<iostream>
using namespace std;

int strstr(string ,string);

int main()
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    return s.find(x);
}