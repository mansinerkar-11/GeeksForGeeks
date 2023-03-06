#include<iostream>
using namespace std;

class Solution {

  public:
    int noConseBits(int n) {
         for(int i = 30; i>=2; i--)
        {
            int mask1 = 1<<i;
            int mask2 = 1<<(i-1);
            int mask3 = 1<<(i-2);
            
            if((mask1&n) && (mask2&n) && (mask3&n)){
                n = (n^mask3);
            }
        }
        return n;
    }
};


int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    Solution obj;
    int ans=obj.noConseBits(n);
    cout<<ans<,endl;
    return 0;
}