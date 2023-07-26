//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include<unordered_map>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char, int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        
        int n = str.size();
        if(n==1)
        return mp[str[0]];
        int sum = mp[str[n-1]];
        for(int i=n-2; i>=0; i--){
            
            if(mp[str[i]] >= mp[str[i+1]])
            sum += mp[str[i]];
            
            else{
                sum -= mp[str[i]];
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {{
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends