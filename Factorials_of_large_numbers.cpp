//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include<vector>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        vector<int> v;
        v.push_back(1);
        for(int i=2;i<=N;i++){
            int carry = 0;
            for(int j = v.size()-1;j>=0;j--){
                int val = (i*v[j]+carry);
                v[j] = val%10;
                carry = val/10; 
            }
            while(carry>0){
                v.insert(v.begin(),carry%10);
                carry/=10;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {{
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends