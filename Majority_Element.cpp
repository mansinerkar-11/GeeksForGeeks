//{ Driver Code Starts
//Initial template for C++

#include<iostream>
#include<unordered_map>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        unordered_map<int,int>m;
        for(int i=0;i<size;i++){
            m[a[i]]++;
            
        }
         for(int i=0;i<size;i++){
            if(m[a[i]]>size/2){
                return a[i];
            }
            
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main(){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    
    return 0;
}

// } Driver Code Ends