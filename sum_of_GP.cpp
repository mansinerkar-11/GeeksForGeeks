#include<iostream>
#include<math.h>
using namespace std;

class Solution
{
	public:
		long sum_of_gp(long n,long a, long r)
		{
		    if(r!=1){
		        return (a*(pow(r,n)-1)/(r-1));
		    }
		    else 
		    return a*n;
		}
};

int main(){
    	long n, a, r;
    	cin >> n >> a >> r;
    	Solution ob;
    	long long int ans = ob.sum_of_gp(n, a, r);
    	cout << ans <<"\n";
	return 0;
}