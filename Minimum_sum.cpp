//{ Driver Code Starts
//Initial template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
       sort(arr,arr+n);
        vector<int> a;
        vector<int> b;
        int i=n-1,j=0;
        while(i>=0)
        {
            a.push_back(arr[i--]);
            if(i>=0)
                b.push_back(arr[i--]);
        }
        vector<int> result;
        int carry=0;
        for(i=0;i< min(a.size(),b.size());i++)
        {
            int sum=carry;
            sum+=a[i]+b[i];
            carry=sum/10;
            sum=sum%10;
            result.push_back(sum);
        }
        if(i<a.size())
        {
            int d=carry+a[i];
            carry=d/10;
            d=d%10;
            result.push_back(d);
            
        }
            
        if(i<b.size())
        {
            int d=carry+b[i];
            carry=d/10;
            d=d%10;
            result.push_back(d);
        }
        if(carry)
            result.push_back(carry);
        reverse(result.begin(),result.end());
        string s="";
        int ct=0;
        for(auto x:result)
        {
            if(ct==0 && x==0)
                continue;
            ct++;
            s=s+to_string(x);
        }
        return s;
        }
};

//{ Driver Code Starts.
int main() {
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends