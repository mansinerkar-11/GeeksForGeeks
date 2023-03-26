#include <iostream>
#include<map>
#include<vector>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
        map<int,int> m1;
            map<int,int> m2;
            map<int,int> m3;
            vector<int> v;
           for(int i=0;i<n1;i++)
           {
               m1[A[i]]++;
           }
           for(int i=0;i<n2;i++)
           {
               m2[B[i]]++;
           }
           for(int i=0;i<n3;i++)
           {
               m3[C[i]]++;
           }
           map<int,int>:: iterator i1=m1.begin();
           map<int,int>:: iterator i2=m2.begin();
           map<int,int>:: iterator i3=m3.begin();
        for(auto i:m1)
        {
            if(m2.find(i.first)!=m2.end()&&m3.find(i.first)!=m3.end())
            {
                v.push_back(i.first);
            }
        }
           return v;
        }

};

//{ Driver Code Starts.

int main ()
{
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    
}
// } Driver Code Ends