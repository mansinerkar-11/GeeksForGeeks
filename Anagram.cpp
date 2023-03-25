// /{ Driver Code Starts
#include <iostream>
#include<unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
       unordered_map<char, int> m1, m2;
        for(char ch:a) m1[ch]++;
        for(char ch:b) m2[ch]++;
        return m1==m2;
    }

};

//{ Driver Code Starts.

int main() {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    

}

// } Driver Code Ends