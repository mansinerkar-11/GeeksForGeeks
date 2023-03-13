// For a given number N. Print the pattern in the following form: 1 121 12321 1234321 for N = 4.

// Example 1:

// Input:
// N = 3
// Output:
// 1 121 12321
// Explanation:
// For N = 3 we will print the 3 strings 
// according to the pattern.

#include<iostream>
#include<vector>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int n)
    {
         vector<string>ans;
          for(int i=1;i<=n;i++)
          {
                 string tp = "";
                  int k=1;
                 for(;k<=i;k++)
                   tp+= to_string(k);
                   
                k-=2;
                for(;k>=1;k--)
                   tp+=to_string(k);
                   
                ans.push_back(tp);
          }
          
          return ans;
    
    }
};

//{ Driver Code Starts.
int main()
{
    {
        int N;
        cout<<"Enter Number : ";
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}
// } Driver Code Ends