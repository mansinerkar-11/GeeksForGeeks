#include <iostream>
#include<vector>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    vector<pair<int,int> >a;
        for(int i=0;i<n;i++){
            a.push_back(make_pair(arr[i],dep[i]));
        }
        sort(a.begin(),a.end());
        vector<pair<int,int> >b;
        int flag;
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            flag=0;
            for(int j=0;j<b.size();j++){
             if(a[i].first>b[j].second){
                 flag=1;
                 b[j].first=a[i].first;
                 b[j].second=a[i].second;
                 break;
             }
            }
            if(flag==0){
                b.push_back(make_pair(a[i].first,a[i].second));
            }
             
        }
        return b.size();
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    
   return 0;
}
// } Driver Code Ends