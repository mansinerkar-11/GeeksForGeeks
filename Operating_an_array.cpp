//{ Driver Code Starts
#include<iostream>
using namespace std;
bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);
int main(){
    {
		int n;
		cin>>n;
		int a[10000];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y,yi,z;
		cin>>x>>y>>yi>>z;
		bool b=searchEle(a,x);
		if(b==true)
			cout<<"1 ";
		else
			cout<<"0 ";
		b=insertEle(a,y,yi);
		if(b){
		if(a[yi]==y)
			cout<<"1 ";
		else
			cout<<"0 ";
		}
		else
			cout<<"0 ";
		b=deleteEle(a,z);
		if(b){
		if(!searchEle(a,z))
			cout<<"1 \n";
		else
			cout<<"0 \n";
		}
		else
			cout<<"0 \n";
	}
}
// } Driver Code Ends


/* Complete the function(s) below */
const int N{10'000};

bool searchEle(int a[],int x)
{
    return find(a,a+N,x)!=a+N;
}
bool insertEle(int a[],int y,int yi)
{
    return a[yi]=y;
}
bool deleteEle(int a[],int z)
{
    return find(a,a+N,z);
}