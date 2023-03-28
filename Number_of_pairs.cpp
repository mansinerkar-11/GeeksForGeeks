//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input array
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int M, int N)
    {
        sort(X,X+M);
       sort(Y,Y+N) ;
       int cnt3=0,cnt2=0,cnt1=0,cnt4=0;
       for(int i=0;i<N;i++){
           if(Y[i]==3)cnt3++;
           if(Y[i]==2)cnt2++;
           if(Y[i]==1)cnt1++;
           if(Y[i]==4)cnt4++;
       }
       long long cnt=0;
       for(int i=0;i<M;i++){
           if(X[i]==1)continue;
           if(X[i]==2)cnt+=(N-cnt2-cnt3-cnt4);
           else if(X[i]==3)cnt+=(N-cnt3);
           else{
               int l=0,h=N-1;
               int ans=N;
               while(l<=h){
                   int m=l+(h-l)/2;
                   if(Y[m]<=X[i]){
                       l=m+1;
                   }
                   else {
                       ans=m;
                       h=m-1;
                   }
               }
               cnt+=(N-ans);
               cnt+=cnt1;
           }
         
       }
       return cnt;
    
    }
};


//{ Driver Code Starts.
int main()
{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	
}
// } Driver Code Ends