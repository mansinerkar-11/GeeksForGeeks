//{ Driver Code Starts
#include<iostream>
#include<map>
using namespace std;
string firstRepChar(string s);
int main()
 
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
      map<char,int> mp;
    for(int i=0; i<s.size(); i++){
        if(mp.count(s[i])){
            string ans="";
            ans+=s[i];
            return ans;
        }else{
            mp[s[i]]=0;
        }
    }
    return "-1";
}