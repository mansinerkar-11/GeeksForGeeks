#include <iostream>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *arr2=new int[2];
           for(int i=0;i<n;i++){
                if(arr[abs(arr[i])-1] > 0){
                    arr[abs(arr[i])-1] *=-1;
                }
                else{
                    arr2[0]=abs(arr[i]);
                }
            }
            
            for(int i=0;i<n;i++){
                if(arr[i]>0){
                    arr2[1]=i+1;
                    break;
                }
            }
            
            return arr2;
    }
};

//{ Driver Code Starts.

int main() {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    
    return 0;
}
// } Driver Code Ends