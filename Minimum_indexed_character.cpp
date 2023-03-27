//{ Driver Code Starts
//Initial template for C++

#include <iostream>
#include<unordered_map>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_map<int,int> mp;
        for(int i =0;i<patt.size(); i++)
        {

            mp[patt[i]]++;

        }

        for(int j =0; j<str.size(); j++)
        {

            if(mp[str[j]]>0)

            {

                return j;
                break;

            }

        }

        return -1;

    }

};

//{ Driver Code Starts.

int main()
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    
	return 0;
}

// } Driver Code Ends