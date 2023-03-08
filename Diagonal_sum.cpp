#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
       int i,j,sum=0, n=matrix[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
              if(i==j )
                sum=sum+matrix[i][j];
            
            for(j=0;j<n;j++)
             if(j==n-1-i )
              sum=sum+matrix[i][j];
            
 
        }  // i-end  
        return sum;
    }
};

int main()
{
    	int n;
		cin >> n;
		vector<vector<int> > matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++)
        {
			for(int j = 0; j < n; j++)
            {
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.DiagonalSum(matrix);
		cout << ans <<'\n';
	
	return 0;
}