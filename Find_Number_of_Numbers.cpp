//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int n, int k)
{
     string s="";
     string t=to_string(k);
     int count=0;
     for(int i=0;i<n;i++)
     {
         s=s+to_string(a[i]);
     }
     for(int i=0;i<s.size();i++)
     {
         if(s[i]==t[0])
         {
             count++;
         }
     }
     return count;
}
