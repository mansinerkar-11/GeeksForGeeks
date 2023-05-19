//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long>s;
        s.push(-1);
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]<s.top()){
                long long b=arr[i];
                arr[i]=s.top();
                s.push(b);
            }
            else{
                while(arr[i]>=s.top()&&s.top()!=-1) s.pop();
                long long a=arr[i];
                arr[i]=s.top();
                s.push(a);
            }
        }
        return arr;
    }

};

//{ Driver Code Starts.

int main()
{
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends