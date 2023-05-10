//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
          vector<int>v;
        sort(arr,arr+n);
        for(int i=n;i>=0;i--){
            if(arr[i]%2!=0){
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
    }
};

//{ Driver Code Starts.
int main() {{
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends